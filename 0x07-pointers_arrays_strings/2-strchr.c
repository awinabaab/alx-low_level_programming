#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: Character to be located
 *
 * Return: Pointer to first occurrence of @c, or NULL if @c is not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return ((char *) s);

	return (0);
}
