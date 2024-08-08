#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be represented in binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if(n > 0)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
