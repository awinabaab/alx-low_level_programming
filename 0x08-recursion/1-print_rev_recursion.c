#include "main.h"

/**
 * _print_rev_recusrion - Prints a string in reverse
 * @s: String to be printed in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
