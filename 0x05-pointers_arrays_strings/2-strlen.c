#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to be determined
 *
 * Return: length os string @s
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s; s++)
	{
		length++;
	}

	return (length);
}
