#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int sub;

	for (sub = 0; sub < n; sub++)
	{
		printf("%d", a[sub]);
		if (sub < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
