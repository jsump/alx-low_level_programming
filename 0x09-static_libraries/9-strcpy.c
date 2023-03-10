#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @src: copeid from
 * including the terminating null byte (\0)
 * @dest: copy to
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
