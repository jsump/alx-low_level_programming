#include "main.h"

#include <string.h>
#include <fcntl.h>

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
	int fdescriptor;
	ssize_t byteswritten;
	size_t length;

	if (filename == NULL)
		return (-1);

	fdescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		byteswritten = write(fdescriptor, text_content, length);
		if (byteswritten == -1)
			return (-1);

	}
	close(fdescriptor);
	return (1);
}
