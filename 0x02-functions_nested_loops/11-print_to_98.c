#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from @n to 98
 * Description: the first printed number should be the argument
 * the last printed number should be 98
 *
 * @n: range to be printed
 *
 * Return: void
 */

void print_to_98(int n)
{
	int count;

	for (count = n; count < 98; count++)
		printf("%d, ", count);

	if (count > 98)
	{
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	}
	printf("%d\n", 98);
}
