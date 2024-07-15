#include "main.h"
#include <stdlib.h>
#include <string.h>

char *alloc_concat(int, char**);

/**
 * argstostr - Concatenates all the arguments of te program
 * @av: Array of arguments
 * @ac: Size of @ac
 *
 * Return: Pointer to anew string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int sub;
	unsigned int index;
	char *concat;
	int count = 0;

	if (ac < 1 || !av)
		return (NULL);

	concat = alloc_concat(ac, av);
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

/**
 * alloc_concat - Allocate memory for concatenation
 * @av: Array of arguments
 * @ac: Size of @av
 *
 * Return: Pointer to allocated memory
 */

char *alloc_concat(int ac, char **av)
{
	int sub, len = 0;
	unsigned int concat_len = 0;
	char *concat_mem;

	if (ac < 1 || !av)
		return (NULL);

	for (sub = 0; sub < ac; sub++)
	{
		len = strlen(av[sub]);
		concat_len += len + 1;
	}

	concat_mem = malloc((sizeof(char) * concat_len) + 1);
	if (!concat_mem)
		return (NULL);

	return (concat_mem);
}
