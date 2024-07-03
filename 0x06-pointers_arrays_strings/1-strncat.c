#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings by n bytes
 * @dest: string to be appended
 * @src: string to append
 * @n: number of bytes of @n to be appended
 *
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int sub;

	while (*dest)
		dest++;

	for (sub = 0; sub < n && *src; dest++, src++, sub++)
		*dest = *src;

	return (dest);
}
