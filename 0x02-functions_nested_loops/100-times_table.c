#include "main.h"

/**
 * print_times_table - prints the nth times table, starting with 0
 * @n: nth times table to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int product, multiplicand, multiplier;

	if ((n > 15) && (n < 0))
		return;
	for (multiplicand = 0; multiplicand <= n; multiplicand++)
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			product = multiplicand * multiplier;
			if (multiplier != 0)
				_putchar(',');
			if (product < 10)
			{
				if (multiplier != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + 48);
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			else if (product >= 100)
			{
				_putchar(' ');
				_putchar((product / 100) + 48);
				_putchar((product / 10 % 10) + 48);
				_putchar((product % 10) + 48);
			}
			else if (product >= 1000)
			{
				_putchar((product / 1000) + 48);
				_putchar((product / 100) + 48);
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
