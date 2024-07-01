#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: String to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (length = length - 1; s[length] != '\0'; length--)
		_putchar(s[length]);
	_putchar('\n');
}
