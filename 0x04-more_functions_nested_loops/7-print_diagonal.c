#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number os times to print \ character
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int count, space;

	if (n < 1)
		_putchar('\n');

	for (count = 0; count < n; count++)
	{
		for (space = 0; space < n; space++)
		{
			if (space == count)
				_putchar('\\');
			else if (space < count)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
