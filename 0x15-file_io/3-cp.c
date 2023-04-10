#include "main.h"
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
 * file_copy - copies a file
 * @file_from: file to be copied
 * @file_to: file that has been copied
 * Return: exit status
 *
 */
void file_copy(char *file_from, char *file_to)
{
	int fd_from;
	int fd_to;
	int readbytes;
	int writtenbytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s. \n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s. \n", file_to);
		exit(99);
	}
	while ((readbytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writtenbytes = write(fd_to, buffer, readbytes);
		if (writtenbytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s. \n", file_to);
			exit(99);
		}
	}


	if (readbytes == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s. \n", file_from);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d, \n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d, \n", fd_to);
		exit(100);
	}
}
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
