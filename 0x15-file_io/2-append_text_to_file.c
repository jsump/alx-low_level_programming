#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of file
 * Return: 1 on success, -1 on failutre
 * Do not create the file if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filepointer;
	int byteswritten;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	filepointer = fopen(filename, "a");
	if (filepointer == NULL)
	{
		return (-1);
	}
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
	return (-1);
}
