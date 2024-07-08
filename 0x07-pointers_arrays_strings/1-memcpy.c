#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination of copied memory area
 * @src: source of memory area to be copied
 * @n: number of bytes of @src to be copied into @dest
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
