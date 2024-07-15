#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strnigs
 * @s1: String one
 * @s2: String two
 *
 * Return: Pointer to newly allocated memory of the combination of @s1 and @s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int start, end;

	if (!s1 || !s2)
		return (NULL);

	concat = malloc((sizeof(char) * strlen(s1)) +
			(sizeof(char) * strlen(s2)) + 1);

	if (!concat)
		return (NULL);


	for (start = 0; s1[start]; start++)
		concat[start] = s1[start];

	for (end = 0; s2[end]; end++)
		concat[start++] = s2[end];

	return (concat);
}
