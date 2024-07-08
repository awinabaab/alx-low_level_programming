#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to string
 * @accept: Bytes of @s to be counted
 *
 * Return: Number of bytes in the initial segment of @s,
 * which conssit only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int sub, index;
	unsigned int length = 0;

	for (sub = 0; s[sub] != ' '; sub++)
		for (index = 0; accept[index] != '\0'; index++)
			if (s[sub] == accept[index])
				length++;

	return (length);
}
