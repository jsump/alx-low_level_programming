#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid,
 * previously created by your alloc_grid function
 * @height: input of height
 * @grid: array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
