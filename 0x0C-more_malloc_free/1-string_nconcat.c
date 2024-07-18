#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates @s1 with the first @n bytes of @s2
 * @s1: String one
 * @s2: String two
 * @n: Number of bytes of @s2 to concatenate
 *
 * Return: Pointer to new memory containing concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sub;
	unsigned int index;
	char *nconcat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	nconcat = malloc((sizeof(char) * strlen(s1)) + (sizeof(char) * n) + 1);
	if (!nconcat)
		return (NULL);

	for (sub = 0; sub < strlen(s1); sub++)
		nconcat[sub] = s1[sub];

	for (index = 0; index < n; index++)
		nconcat[sub++] = s2[index];

	nconcat[sub] = '\0';

	return (nconcat);
}
