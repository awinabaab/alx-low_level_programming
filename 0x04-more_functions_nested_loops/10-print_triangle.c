#include "main.h"

/**
 * print_triangle - prints a triangle using # character
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int count, space, align;

	if (size < 1)
		_putchar('\n');

	for (count = 0; count < size; count++)
	{
		space = (size - 1) - count;
		for (; space > 0; space--)
		{
			_putchar(' ');
		}
		align = count + 1;
		for (; align > 0; align--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
