#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to be executed on
 * @size: Size of @array
 *
 * @action: Function to be executed on each element of @array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int sub;

	if (!array || !action)
		return;

	for (sub = 0; sub < size; sub++)
		action(array[sub]);
}
