#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * (*f) - Function pointer
 * @n: String to be printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *n))
{
	f(name);
}

/**
 * f - Prints a string passed to it
 * @n: String to be printed
 *
 * Return: void
 */

void f(char *n)
{
	int sub;

	for (sub = 0; n[sub] != '\0'; sub++)
		_putchar(n[sub]);
}
