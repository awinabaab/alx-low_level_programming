#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a @str
 * @str: String to be duplicated
 *
 * Return: Pointer to the duplicated string, NULL if allocation fails
 */

char *_strdup(char *str)
{
	char *copy = malloc(strlen(str));
	unsigned int sub;

	if (!str || !copy)
		return (NULL);

	for (sub = 0; sub < strlen(str); sub++)
		copy[sub] = str[sub];

	return (copy);
}
