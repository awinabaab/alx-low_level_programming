#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: String to be divided
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, length = 0;

	while (str[length] != '\0')
		length++;

	n = length / 2;

	if ((length % 2) > 0)
		n++;

	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
