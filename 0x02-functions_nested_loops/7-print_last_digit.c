#include "main.h"

/**
 * print_last_digit - prints the lasts digit of a number
 * @n: number to be checked
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + 48);
	}
	else
		_putchar(last_digit + 48);

	return (last_digit);
}
