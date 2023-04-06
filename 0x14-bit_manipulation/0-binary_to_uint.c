#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if,
 * there is one or more chars in the string b, that is not 0 or 1,
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	int index = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
<<<<<<< HEAD
		k = k * 2 + b[index] - '0';
=======
		k = k *2 + b[index] - '\0';
>>>>>>> parent of 08f6823... Multiple mains update
		++index;
	}
	return (k);
}
