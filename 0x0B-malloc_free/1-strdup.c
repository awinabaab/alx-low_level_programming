#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - Duplicates a @str
 * @str: String to be duplicated
 *
 * Return: Pointer to the duplicated string, NULL if allocation fails
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int sub;

	if (!str)
		return (NULL);

	copy = malloc(sizeof(char) * strlen(str) + 1);

	if (!copy)
		return (NULL);

	for (sub = 0; sub < strlen(str); sub++)
		copy[sub] = str[sub];

	return (copy);
}
