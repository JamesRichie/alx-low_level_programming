#include "main.h"
#include<stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2-dimensional grid
 * @grid: 2d grid
 * @height: Height of grid
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
