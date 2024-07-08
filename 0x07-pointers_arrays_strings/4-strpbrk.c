#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: bytes of @s to be searched
 *
 * Return: Pointer to the mactched byte in @s, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int sub, index;

	for (sub = 0; s[sub] != '\0'; sub++)
		for (index = 0; accept[index] != '\0'; index++)
			if (s[sub] == accept[index])
				return (s + sub);

	return (0);
}
