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
	while (*dest)
		dest++;

	for (; *dest == '\0' && *src; dest++, src++)
	{
		*dest = *src;
	}

	*dest = '\0';

	return (dest);
}
