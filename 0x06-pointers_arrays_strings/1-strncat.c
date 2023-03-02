#include "main.h"
/**
 * _strncpy - function that concatinates two strings
 * @src: string to be appended
 * @dest: new string
 * @n: bytes to be used from src
 * does not need to be null-terminated if contain n or more bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
