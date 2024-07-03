#include "main.h"

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
	int sub = 0, count;

	while (dest[sub] != '\0')
		sub++;

	for (count = 0; count < n && src[count] != '\0'; count++, sub++)
		dest[sub] = src[count];

	return (dest);
}
