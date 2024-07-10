#include "main.h"

int checker(int n, int limit, int next);

/**
 * is_prime_number - Determines whether a given number is prime
 * @n: Given number
 *
 * Return: 1 if number is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (checker(n, n / 2, 2));
}


/**
 * checker - Checks if a number a number is prime
 * @n: Given number
 * @limit: Stop value
 * @next: Next possible divisor
 *
 * Return: 1 if number is prime, otherwise 0
 */

int checker(int n, int limit, int next)
{
	if (n % next == 0)
		return (0);
	else if (next >= limit)
		return (1);
	else
		return (checker(n, limit, next + 1));
}
