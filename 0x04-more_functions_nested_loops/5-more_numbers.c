#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int digit, count;

	for (count = 0; count < 10; count++)
	{
		for (digit = 0; digit < 15; digit++)
		{
			if (digit > 9)
				_putchar((digit / 10) + 48);
			_putchar((digit % 10) + 48);
		}
		_putchar('\n');
	}
}
