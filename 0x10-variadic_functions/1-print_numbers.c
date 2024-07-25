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
		printf("%d", number);
		if (sub != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
