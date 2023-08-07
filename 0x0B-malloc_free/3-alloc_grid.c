#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @height: Input height
 * @width: Input width
 * Return: Success
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(height * sizeof(int));

		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
