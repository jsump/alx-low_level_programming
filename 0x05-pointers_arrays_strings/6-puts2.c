#include "main.h"
/**
 * puts2 - prints every other character in string
 * start with first character
 * @str: string whose characters will be printed
 * Return: Always 0
 */
void puts2(char *str)
{
	int len = 0;
	int m = 0;
	char *y = str;
	int l;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	m = len - 1;
	for (l = 0 ; l <= m ; l++)
	{
		if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	}
	_putchar('\n');
}
