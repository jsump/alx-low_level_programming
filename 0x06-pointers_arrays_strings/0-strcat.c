#include "main.h"
/**
 * _strcat - funtion that concatinates two strings
 * @src: string to be appended
 * @dest: new string, terminates null byte at its end
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

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

	dest[i] = '\0';
	return (dest);
}
