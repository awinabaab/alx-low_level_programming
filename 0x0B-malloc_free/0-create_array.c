#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of array
 * @c: Initializing character
 *
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *string = malloc(size * sizeof(char));
	unsigned int sub;

	if (size <= 0)
		return (NULL);

	for (sub = 0; sub < size; sub++)
		string[sub] = c;

	return (string);
}
