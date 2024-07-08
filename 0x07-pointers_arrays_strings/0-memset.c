#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @n: the number of bytes to b filled
 * @s: memory area to be filled
 * @b: constant byte to fill @s
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
