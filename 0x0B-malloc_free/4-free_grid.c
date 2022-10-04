#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: pointer to a grid
 * @height: number of rows in grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
	}
}
