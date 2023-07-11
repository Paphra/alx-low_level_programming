#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer tothe 2d array
 * - NULL if failed, or if 0 or negative width and height
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
