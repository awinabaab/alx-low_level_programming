#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: Array of integers to be searched through
 * @size: Size of @array
 * @value: Value to be searched for
 *
 * Return: Index of @value if @values is found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
