#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 * Return: 0
 */
char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'z')
			n[p] = n[p] - 32;
		p++;
	}
	return (n);
}
