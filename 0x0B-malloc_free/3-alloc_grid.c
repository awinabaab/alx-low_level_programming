#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2 dimensional array of integers
 * @width: Columns
 * @height: Rows
 *
 * Return: NULL on failure or if @width or @height is 0
 */

int **alloc_grid(int width, int height)
{
	int sub, index;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (sub = 0; sub < height; sub++)
	{
		grid[sub] = malloc(sizeof(int) * width);
		if (!grid[sub])
		{
			for (sub = 0; sub < height; sub++)
				free(grid[sub]);
			free(grid);
			return (NULL);
		}
	}
	for (sub = 0; sub < height; sub++)
		for (index = 0; index < width; index++)
			grid[sub][index] = 0;
	return (grid);
}
