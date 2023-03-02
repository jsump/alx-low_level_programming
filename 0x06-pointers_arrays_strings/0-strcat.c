#include "main.h"
/**
 * _strcat - funtion that concatinates two strings
 * @src: string to be appended
 * @dest: new string, terminates null byte at its end
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
