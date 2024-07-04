#include "main.h"

/**
 * _strcat - Concatenates two strings
 * Description: Appends the @src string to the @dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and the adds a terminating null byte
 * @dest: String to be appended
 * @src: String to append
 *
 * Return: A pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int sub = 0, end;

	while (dest[sub] != '\0')
		sub++;

	for (end = 0; dest[sub] == '\0' && src[end] != '\0'; sub++, end++)
	{
		dest[sub] = src[end];
	}

	dest[sub] = '\0';

	return (dest);
}
