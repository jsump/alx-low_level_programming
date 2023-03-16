#include "main.h"
#include "stdlib.h"
/**
 * array_range - creates an array of integers
 * @min: smallest element
 * @max: largest element
 * Array ordered from min to max
 * if min > max, return NULL
 * if malloc fails, return NULL
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int k;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		p[k] = min++;
	return (p);
}
