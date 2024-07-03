#include "main.h"

/**
 * string_toupper - Changes all lowercase letter of a string to uppercase
 * @s: string
 *
 * Return: pointer to @s
 */

char *string_toupper(char *s)
{
	int sub;

	for (sub = 0; s[sub] != '\0'; sub++)
	{
		if (s[sub] > 96 && s[sub] < 123)
			s[sub] -= 32;
	}

	return (s);
}
