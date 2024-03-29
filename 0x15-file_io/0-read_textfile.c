#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSTIX standard output
 * @filename: name of file
 * @letters: number of lettersto be read and printed
 * Return: actual number of letters it could read and print
 * if file can't be opened or read, return 0
 * if filename is null, return 0
 * if write fails or doesn't write expected number of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filepointer;
	ssize_t readbytes;
	char *buffer;

	if (!filename)
		return (0);
	filepointer = fopen(filename, "r");
	if (!filepointer)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
	{
		fclose(filepointer);
		return (0);
	}
	readbytes = fread(buffer, sizeof(char), letters, filepointer);
	if (readbytes == -1)
	{
		fclose(filepointer);
		free(buffer);
		return (0);
	}
	buffer[readbytes] = '\0';
	if (write(STDOUT_FILENO, buffer, readbytes) != readbytes)
	{
		fclose(filepointer);
		free(buffer);
		return (0);
	}
	fclose(filepointer);
	free(buffer);
	return (readbytes);
}
