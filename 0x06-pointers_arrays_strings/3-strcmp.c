#include "main.h"
/**
 * _strcmp - compare teo strings
 * @s1: first string to be inputed
 * @s2: second string to be inputed
 * Return: s1[s] - s2[s]
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	s = 0;
	while (s1[s] != '\0' && s2[s] != '\0')
	{
		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
		s++;
	}
	return (0);
}
