#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * not allowed to use arrays, malloc, %, /
 * @n: input
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int k;

	for (k = 0; k < sizeof(unsigned long int) * 8; i++)
	{
		buffer[i] = ((n >> ((sizeof(unsigned long int) * 8) - i - 1)) & 1)
	}
	buffer[sizeof(unsigned long int) * 8] = '\0';
}
