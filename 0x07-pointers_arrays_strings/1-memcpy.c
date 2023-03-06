#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @src: copied from
 * @dest: copies to
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
