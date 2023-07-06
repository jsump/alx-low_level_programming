#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 characters
 * Return: the converted number, or 0 if,
 * there's one or more characters in the string b that isn't 0 or 1,
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	int index = 0;

	if (b == 0)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		k = k * 2 + (b[index] - '0');
		index++;
	}
	return (k);
}
