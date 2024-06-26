#include "main.h"

/**
 * print_times_table - prints the nth times table, starting with 0
 * @n: nth times table to be printed
 * Return: void
 */

void print_times_table(int n)
{
	int product, multiplicand, multiplier;

	if ((n <= 15) && (n >= 0))
	{
		for (multiplicand = 0; multiplicand <= n; multiplicand++)
		{
			_putchar(48);
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				product = multiplicand * multiplier;
				_putchar(',');
				_putchar(' ');
				if (product < 100)
					_putchar(' ');
				if (product < 10)
					_putchar(' ');
				if (product > 99)
				{
					_putchar((product / 100) + 48);
					_putchar(((product / 10) % 10) + 48);
				}
				else if ((product < 100) && (product > 9))
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		_putchar('\n');
		}
	}
}
