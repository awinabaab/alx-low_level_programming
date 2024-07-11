#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 1 if @s1 == @s2, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && *s2 == '*' && *(s2 + 1))
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
