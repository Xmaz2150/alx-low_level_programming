#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D array:
 * @grid: Input, previously created by alloc_grid
 * @height: length of grid
 *
 * Return: none;
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	else
	{
		i = 0;

		for ( ; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
