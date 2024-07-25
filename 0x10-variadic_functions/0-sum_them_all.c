#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of variable arguments
 *
 * Return: Sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, numbers;
	unsigned int sub;

	va_start(args, n);
	for (sub = 0; sub < n; sub++)
	{
		numbers = va_arg(args, int);
		sum += numbers;
	}
	va_end(args);

	return (sum);
}
