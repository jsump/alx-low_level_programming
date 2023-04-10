#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: number of arguments passed
 * @argv: array of strings containing arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	return (0);
}

/**
 * file_copy - copies a file
 * @file_from: file to be copied
 * @file_to: file that has been copied
 * Return: exit status
 */
void file_copy(char *file_from, char *file_to)
{
	int fd_from;
	int fd_to;
	int readbytes;
	int wriitenbytes;
	char buffer[BUFFER_SIZE];

	fd_from = fopen(file_from, ORDONLY);
	if (fd_from == -1)
	{
		printf("Error: Can't read from file NAME_OF_FILE\n", file_from);
		exit(98);
	}
	if (readbytes == -1)
	{
		printf("Error: Can't read from file NAME_OF_FILE\n", file_from);
		exit(98);
	}

	fd_to = fopen(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		printf("Error: Can't write to NAME_OF_FILE\n", file_to);
		exit(99);
	}
	while ((readbytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writtenbytes = fwrite(fd_to, buffer, readbytes);
		if (writtenbytes == -1)
		{
			printf("Error: Can't write to NAME_OF_FILE\n", file_to);
			exit(99);
		}
	}

	fclose(fd_from, file_from);
	fclose(fd_to, file_to);
}

/**
 * file_close - closes a file
 * @fd: file descriptor
 * @filename: name of file
 * Return: exit status
 */
void file_close(int fd, char *filename)
{
	if (fclose(fd) == -1)
	{
		printf("Error: Cant't close fd FD_VALUE\n", filename);
		exit(100);
	}
}
