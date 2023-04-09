#include "main.h"
/**
 * read_textfile - reads a text file,
 *  and prints it to the POSIX standard output
 *  @filename: pointer to the filename
 *  @letters: number of letters to be read and printed
 *  Return: actual number of letters it could read and print
 *  If the file cannot be opened or read return 0
 *  if filename is null return 0
 *  if write fails or does not write the expected amount of bites, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filepointer;
	char *buffer;
	ssize_t readbytes;
	ssize_t writtenbytes;

	buffer = malloc(letters + 1);

	if (buffer == NULL)
		return (-1);

	filepointer = fopen(filename, O_RDONLY);

	if (filename == NULL)
	{
		free(buffer);
		return (-1);
	}
	readbytes = fread(buffer, 1, letters, filepointer);

	if (readbytes == -1)
	{
		fclose(filepointer);
		free(buffer);

		return (-1);
	}
	buffer[readbytes] = '\0';
	writtenbytes = write(STDOUT_FILENO, buffer, readbytes);
	if (writtenbytes == -1 || writtenbytes != readbytes)
	{
		fclose(filepointer);
		free(buffer);
		return (0);
	}
	printf("%s", buffer);
	fclose(filepointer);
	free(buffer);
	return (readbytes);
}
