#include "main.h"

#include <string.h>

/**
 * append_text_to_file - appends text at te end of file
 * @filename: name of file
 * @text_content: NULL termainated string at end of file
 * Return: 1 on success, -1 on failure
 * Do not create file if it doesn't exist
 * if filename is NULL, return -1
 * if text_content is NULL, do not add anything to file,
 * return 1 if file exists, -1 if the file doesn't exist,
 * or if you do not have the correct permission to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filepointer;
	int byteswritten;
	int len;

	if (filename == NULL)
		return (-1);
	filepointer = fopen(filename, "a");
	if (filepointer == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		byteswritten = fwrite(text_content, sizeof(char), len, filepointer);
		if (byteswritten != len)
		{
			fclose(filepointer);
			return (-1);
		}
	}
	fclose(filepointer);
	return (1);
}
