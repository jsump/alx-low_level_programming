#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: - pointer
 * @n: first bytes of the memory area pointed to by s with b
 * @b: output needed
 * Return: array with contant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		*(s + k) = b;
		n--;
	}

	return (s);
}
