#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write file
 * Return: 1 on success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *filepointer;
	size_t byteswritten;
	size_t length;
	int retvl = 1;

	if (filename == NULL)
	{
		return (-1);
	}

	filepointer = fopen(filename, "w");
	if (filepointer == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		byteswritten = fwrite(text_content, sizeof(char), length, filepointer);
		if (byteswritten != length)
		{
			retvl = -1;
		}
	}
	fclose(filepointer);
	return (retvl);
}
