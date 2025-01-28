#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm
 *
 * @array: Array to be searched through
 * @size: Size of @array
 * @value: Values to be searched
 *
 * Return: Index of @value if @value is present, otherwise return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
