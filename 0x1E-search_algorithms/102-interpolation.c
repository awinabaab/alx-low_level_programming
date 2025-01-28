#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search algorithm
 *
 * @array: Array to search through
 * @size: Size of @array
 * @value: Value to be searched for
 *
 * Return: Index of @value if value is found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t low;
	size_t high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		idx = low + (((double)(high - low) /
					(array[high] - array[low]) *
					(value - array[low])));

		if (idx < size)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			return (-1);
		}

		if (value == array[idx])
			return (idx);

		if (value < array[idx])
			high = idx - 1;
		else
			low = idx + 1;
	}

	return (-1);
}
