#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		_putchar(digit);
	_putchar('\n');
}
