#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Two-dimensional arrays
 * @size: Size of each 1-d array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int count;
	int primary_sum = 0, secondary_sum = 0, limit = size * size;

	for (count = 0; count < limit; count++)
		if (count % (size + 1) == 0)
			primary_sum += a[count];
	for (count = 0; count < limit; count++)
		if (count % (size - 1) == 0 && count && count != (limit - 1))
			secondary_sum += a[count];

	printf("%d, %d\n", primary_sum, secondary_sum);
}
