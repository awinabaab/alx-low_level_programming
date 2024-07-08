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
	int sub;

	for (sub = 0; s[sub] != '\0'; sub++)
		if (s[sub] == c)
			return (s + sub);

	return (0);
}
