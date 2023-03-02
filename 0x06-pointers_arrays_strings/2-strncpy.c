#include "main.h"
/**
 * _strncpy - copies string
 * @src: string to be copied
 * @dest: string that's been copied
 * @n: input value
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
