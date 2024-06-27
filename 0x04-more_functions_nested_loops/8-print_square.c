#include "main.h"

/**
 * print_square - prints a square on the terminal using # character
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int length;
	int width;

	if (size < 1)
		_putchar('\n');
	for (length = 0; length < size; length++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
