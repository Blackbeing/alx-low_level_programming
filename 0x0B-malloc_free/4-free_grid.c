#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Free dynamically allocated 2d array
 * @grid: pointer argument
 * @height: int argument
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
