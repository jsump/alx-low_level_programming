#include "main.h"
#include "stdlib.h"
/**
 * string_nconcat - concatinates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be allocates memory
 * If function fails return NULL
 * if n >= length of s2 then use entire s2
 * if NULL is passes, treat as empty string
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0;
	unsigned int m = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (k < len1)
	{
		s[k] = s1[k];
		k++;
	}
	while (n < len2 && k < (len1 + len2))
		s[k++] = s2[m++];

	s[k] = '\0';
	return (s);
}
