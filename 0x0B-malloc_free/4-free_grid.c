#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Grid to be freed
 * @height: Number of rows of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int sub;

	for (sub = 0; sub < height; sub++)
		free(grid[sub]);
	free(grid);
}
