#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: Separator of printed numbers
 * @n: Number of integers passed to the function
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int sub;
	int number;

	va_start(args, n);
	for (sub = 0; sub < n; sub++)
	{
		number = va_arg(args, int);
		if (sub != n - 1)
		{
			printf("%d", number);
			if (separator)
				printf("%s", separator);
		}
	}
	printf("%d\n", number);
	va_end(args);
}
