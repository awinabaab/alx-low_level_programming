#include "search_algos.h"

/**
 * advanced_binary - Searches for the first occurrance of a value in an
 * array of sorted integers using the binary search algorithm
 *
 * @array: Array of sorted integers to search through
 * @size: Size of @array
 * @value: Value to search for
 *
 * Return: Index of the first occurence of @value if value is found,
 * otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low;
	size_t high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	return (_binary_search_(array, low, high, value));
}


/**
 * _binary_search_ - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: Array of integers to be searched through
 * @low: Starting index of the search
 * @high: Ending index of the search
 * @value: Value to be searched for
 *
 * Return: Index of @value if @values is found, otherwise -1
 */

int _binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i;

	if (!array || low > high)
		return (-1);

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
	{
		if (mid == 0 || value > array[mid - 1])
			return (mid);

		high = mid;
		return (_binary_search_(array, low, high, value));
	}

	if (value < array[mid])
	{
		high = mid - 1;
		return (_binary_search_(array, low, high, value));
	}
	else
	{
		low = mid + 1;
		return (_binary_search_(array, low, high, value));
	}

	return (-1);
}
