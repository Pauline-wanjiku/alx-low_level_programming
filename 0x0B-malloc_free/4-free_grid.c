#include "main.h"
#include <stdlib.h>

/**
 *free_grid-function that frees a 2 dimensional grid from alloc_grid function.
 *@grid:previous grid
 *@height:height of grid
 *Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
