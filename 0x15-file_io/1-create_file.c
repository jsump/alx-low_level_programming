#include "main.h"

#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 * Created file must have permissions: rw-------
 * if the file already exists do not change permissions
 * If the file already exists, truncate it
 * if filename is null, return -1
 * if text_content is null, create empty file
 */
int create_file(const char *filename, char *text_content)
{
	FILE *filepointer;
	size_t byteswritten;
	size_t length;

	if (filename == NULL)
		return (-1);

	filepointer = fopen(filename, "w");
	if (filepointer == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		byteswritten = fwrite(text_content, sizeof(char), length, filepointer);
		if (byteswritten != length)
			return (-1);

	}
	fclose(filepointer);
	return (1);
}
