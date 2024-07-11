#include "main.h"

int check(int x, int y);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 *
 * Return: Natural square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}

/**
 * check - Retrun natural square root of a member
 * @n: Number
 * @sqrt: Root
 *
 * Return: Natural square root of @n
 */

int check(int n, int sqrt)
{
	if (n == (sqrt * sqrt))
		return (sqrt);
	else if (n < (sqrt * sqrt))
		return (-1);
	else
		return (check(n, (sqrt + 1)));
}
