#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int sub;

	for (sub = 0; sub < n && *src != '\0'; dest++, src++, sub++)
		*dest = *src;
	for (; sub < n; sub++)
		*dest = '\0';

	return (dest);
}
