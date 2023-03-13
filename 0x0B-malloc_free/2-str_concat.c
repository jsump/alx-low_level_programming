#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int k;
	int m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = m = 0;

	while (s1[k] != '\0')
		k++;

	while (s2[m] != '\0')
		m++;
	concat = malloc(sizeof(char) * (k + m + 1));

	if (concat == NULL)
		return (NULL);
	k = m = 0;

	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}
	while (s2[m] != '\0')
	{
		concat[k] = s2[m];
		k++, m++;
	}
	concat[k] = '\0';
	return (concat);
}
