#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words
 * @char: Strings to be split into words
 *
 * Return: Pointer to array of strings, or NULL if it fails
 */

char **strtow(char *str)
{
	char **split = NULL;
/*	char *token;*/
	unsigned int sub, index = 0, count = 0, columns = 0;

	if (!str)
		return (NULL);

	for (sub = 0; sub < strlen(str); sub++)
		if (str[sub] == ' ' || str[sub ] == '\0')
			columns++;

	split = malloc(sizeof(char *) * columns);
	if (!split)
		return (NULL);

	for (sub = 0; sub < columns; sub++)
	{
		split[sub] = malloc(sizeof(char) * strlen(str) + 1);
		if (!split[sub])
		{
			for (sub = 0; sub < columns; sub++)
				free(split[sub]);
			free(split);
			return (NULL);
		}
	}
	for (sub = 0; sub < columns; sub++)
	{
		if (str[sub] == ' ' || str[sub] == '\0')
		{
			split[index++][count] = 0;
			count = 0;
		}
		else
			split[index][count++] = str[sub];
	}
	return (split);
}
