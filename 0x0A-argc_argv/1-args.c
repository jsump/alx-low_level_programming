#include "main.h"
/**
 * main - prints the number of arguments passes
 * @argc: number pf arguments to be passed
 * @argv: array of arguments to be passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
