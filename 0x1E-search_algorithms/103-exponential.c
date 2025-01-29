#include "search_algos.h"

/**
 * exponential_search - Searches for a value in an array of integers
 * using the exponential search algorithm
 *
 * @array: Array to be searched through
 * @size: Size of @array
 * @value: Values to be searched
 *
 * Return: Index of @value if @value is present, otherwise return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t low;
	size_t high;

	if (!array)
		return (-1);

	idx = 0;
	if (value == array[idx])
		return (idx);

	idx = 1;
	while (idx < size || value >= array[idx])
	{
		if (value == array[idx])
			return (idx);

		if (value < array[idx])
		{
			low = idx / 2;
			high = idx;

			return (_binary_search(array, low, high, value));
		}

		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		idx *= 2;
		if (idx >= size)
		{
			low = idx / 2;
			high = size - 1;

			return (_binary_search(array, low, high, value));
		}
	}

	return (-1);
}

/**
 * _binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: Array of integers to be searched through
 * @low: Starting index of the search
 * @high: Ending index of the search
 * @value: Value to be searched for
 *
 * Return: Index of @value if @values is found, otherwise -1
 */

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
