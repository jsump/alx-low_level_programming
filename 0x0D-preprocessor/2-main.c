#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 * allowed to use standard library
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
