#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int multiplicand;
	int multiplier;
	int product;

	for (multiplicand = 0; multiplicand <= 9; multiplicand++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = multiplicand * multiplier;
			if (multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				if (multiplier != 0)
					_putchar(' ');
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}

		_putchar('\n');
	}
}
