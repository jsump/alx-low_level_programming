#include "main.h"
/**
 *  _strspn - gets the length of prefix substring
 *  @s: inistioal segment
 *  @accept: bytes taken from here
 *  Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				len++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
