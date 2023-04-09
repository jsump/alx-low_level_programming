#include "main.h"
#include <fnctl.h>
/*
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of file
 * Return: 1 on success, -1 on failutre
 * Do not create the file if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filepointer;
	int byteswritten;
	int retvl = 1;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	filepointer = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (filepointer == -1)
	{
		return (-1);
	}
	if (text_context != NULL)
	{
		byteswritten = write(filepointer, text_content, strlen(text_content));
		if (byteswritten == -1)
		{
			retvl = -1;
		}
	}
	else 
	{
		byteswritten = write(filepointer, "", 0);
		if (byteswritten == -1)
		{
			retvl = -1;
		}
	}
	close(filepointer);
	return (retvl);
}
