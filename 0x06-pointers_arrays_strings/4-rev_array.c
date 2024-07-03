#include "main.h"

/**
 * rev_array - Reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *start = a, *end, temp;

	for (end = (a + (n - 1)); start < end; start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
