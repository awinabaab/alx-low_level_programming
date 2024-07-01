#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number os elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count < n - 1)
			printf("%d, ", *(a + count));
		else
			printf("%d\n", *(a + count));
	}
}
