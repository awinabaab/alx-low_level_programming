#include "main.h"

/**
 * factorial - Returns the factorial of a given number @n
 * @n: Factorial to be returned
 *
 * Return: Factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
