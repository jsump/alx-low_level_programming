#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * not allowed to use arrays, malloc, %, /
 * @n: input number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
