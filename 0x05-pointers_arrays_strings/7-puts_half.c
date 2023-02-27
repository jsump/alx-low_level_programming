#include "main.h"
/**
 * puts_half - prints half of string, followed by new line
 * print the second half of the string
 * @str: string to be printed(half)
 * return: 0
 */
void puts_half(char *str)
{
	int x, n, len;

	len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((longi + 1) / 2);

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
