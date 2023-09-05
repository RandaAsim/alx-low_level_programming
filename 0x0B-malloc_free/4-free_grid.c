#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: memory block
 * @height: the high of array
 * Return: num
 */

void free_grid(int **grid, int height)
{
	int r = 0;

	while (r < height)
	{
		free(grid[r]);
		r++;
	}

	free(grid);
}
