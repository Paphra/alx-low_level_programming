#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2d grid
 * @grid: a 2d grid of integeres
 * @height:height ofthe grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
