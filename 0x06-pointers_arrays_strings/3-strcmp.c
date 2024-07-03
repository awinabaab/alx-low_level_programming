#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if @s1==@s2, negative integer if @s1<@s2, otherwise positive int
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);

	return ( *s1 - *s2);
}
