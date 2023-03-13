#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * @width: input of width
 * @height: input of height
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int k;
	int m;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		p[k] = malloc(sizeof(int) * width);

		if (p[k] == NULL)
		{
			for (; k >= 0; k--)
				free(p[k]);

			free(p);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
		p[k][m] = 0;
	}
	return (p);
}
