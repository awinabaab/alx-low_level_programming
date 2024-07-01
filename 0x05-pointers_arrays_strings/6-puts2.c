#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int sub;

	for (sub = 0; str[sub] != '\0'; sub++)
	{
		if ((sub % 2) == 0)
			_putchar(str[sub]);
	}
	_putchar('\n');
}
