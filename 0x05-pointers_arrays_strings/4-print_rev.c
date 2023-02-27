#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int l;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (l = len, l > 0; l--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
