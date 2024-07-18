#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Starting initializing value
 * @max: End initializing value
 *
 * Return: Pointer to an array of integers
 */

int *array_range(int min, int max)
{
	int range, sub;
	int *array;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	array = malloc(sizeof(int) * range);
	if (!array)
		return (NULL);

	for (sub = 0; sub < range; sub++)
		array[sub] = min++;

	return (array);
}
