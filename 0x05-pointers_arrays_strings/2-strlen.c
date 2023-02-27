#include "main.h"
/**
 *  _strlen - measures the length of a string
 * @s: string to be measured
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0)
	{
		len++;
		s++;
	}

	return (len);
}
