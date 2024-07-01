#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: String to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
