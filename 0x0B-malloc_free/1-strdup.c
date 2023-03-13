#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string,
 * which is a duplicate of the string str
 * Memory for the new string is obtained with malloc,
 * and can be freed with free
 * @str: characters
 * Return: NULL if str = NULL
 * On success,_strdup returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *kkk;
	int m;
	int d = 0;

	if (str == NULL)
		return (NULL);
	m = 0;

	while (str[m] != '\0')
		m++;
	kkk = malloc(sizeof(char) * (m + 1));

	if (kkk == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		kkk[d] = str[d];
	return (kkk);
}
