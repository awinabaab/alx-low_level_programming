#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to search through
 * @size: Size of @array
 *
 * @cmp: Pointer to a function that compares values
 *
 * Return: Size <= 0 ? return -1, -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int sub, value;

	if (size < 1)
		return (-1);

	if (array && cmp)
	{
		for (sub = 0; sub < size; sub++)
		{
			value = cmp(array[sub]);
			if (value != 0)
				return (sub);
		}
	}

	return (-1);
}
