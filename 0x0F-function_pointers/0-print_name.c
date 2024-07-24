#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
