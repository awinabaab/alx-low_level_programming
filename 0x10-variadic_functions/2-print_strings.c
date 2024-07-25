#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: Separator between strings
 * @n: Number of Strings passed
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int sub;
	char *string;

	va_start(args, n);
	for (sub = 0; sub < n; sub++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (sub != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
