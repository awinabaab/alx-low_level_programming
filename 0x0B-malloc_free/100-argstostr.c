#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of te program
 * @av: Array of arguments
 * @ac: Size of @ac
 *
 * Return: Pointer to anew string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int sub, len = 0;
	unsigned int index, concat_len = 0;
	char *concat;
	int count = 0;

	if (ac < 1 || !av)
		return (NULL);

	for (sub = 0; sub < ac; sub++)
	{
		len = strlen(av[sub]);
		concat_len += len + 1;
	}

	concat = malloc((sizeof(char) * concat_len) + 1);
	if (!concat)
		return (NULL);

	for (sub = 0; sub < ac; sub++)
	{
		for (index = 0; index < strlen(av[sub]); index++)
			concat[count++] = av[sub][index];
		concat[count++] = '\n';
	}
	return (concat);
}
