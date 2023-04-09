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
	ssize_t readbytes;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	filepointer = fopen(filename, "r");
	if (!filepointer)
	{
		return (0);
	}
	readbytes = fread(buffer, sizeof(char), letters, filepointer);
	if (readbytes == -1)
	{
		fclose(filepointer);
		return (0);
	}
	buffer[readbytes] = '\0';
	printf("%s", buffer);

	fclose(filepointer);
	return (readbytes);
}
