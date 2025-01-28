#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump Search algorithm
 *
 * @array: Sorted array of integers to search through
 * @size: Size of @array
 * @value: Value to search for
 *
 * Return: Index of @value if value is found, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t pivot;
	size_t jump;

	if (!array)
		return (-1);

	pivot = 0;
	jump = sqrt(size);

	while (pivot < size)
	{
		if (value <= array[pivot])
			return (_linear_search(array, size, pivot - jump, pivot, value));

		printf("Value checked array[%ld] = [%d]\n", pivot, array[pivot]);
		pivot = pivot + jump;

		if (pivot >= size)
			return (_linear_search(array, size, pivot - jump, pivot, value));
	}

	return (-1);
}


/**
 * _linear_search - Searches for a value in an array of integers
 * using the linear search algorithm
 *
 * @array: Array to be searched through
 * @size: Size of @array
 * @value: Values to be searched
 * @low: Index to start the serach
 * @high: Index to end the search
 *
 * Return: Index of @value if @value is present, otherwise return -1
 */

int _linear_search(int *array, size_t size, size_t low, size_t high, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (idx = low; idx <= high; idx++)
	{
		if (idx >= size)
			return (-1);

		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
