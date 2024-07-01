#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	for (; *src != '\0'; dest++, src++)
	{
		*dest = *src;
	}
	*dest = '\0';

	return (dest);
}
