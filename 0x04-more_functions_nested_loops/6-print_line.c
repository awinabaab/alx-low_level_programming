#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of _ character(s) to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n < 1)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
