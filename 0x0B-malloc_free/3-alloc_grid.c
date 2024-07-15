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
	int **grid = malloc(sizeof(int *) * width);

	if (width < 1 || height < 1)
		return (NULL);

	if (!grid)
		return (NULL);

	for (sub = 0; sub < width; sub++)
		grid[sub] = malloc(sizeof(int) * height);

	for (index = 0; index < height; index++)
		grid[index][index] = 0;

	return (grid);
}
