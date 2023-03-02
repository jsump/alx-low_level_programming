#include "main.h"
/**
 * leet - encodes a string into 1337
 * @g: input value
 * Return: 0
 */
char *leet(char *g)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; g[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (g[i] == s1[j])
			{
				g[i] = s2[j];
			}
		}
	}
	return (g);
}
