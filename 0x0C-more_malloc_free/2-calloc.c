#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements of the array
 * @size: Size of each element of the array
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int sub;

	if (!nmemb || !size)
		return (NULL);

	array = malloc(size * nmemb);
	if (!array)
		return (NULL);

	for (sub = 0; sub < nmemb; sub++)
		array[sub] = 0;

	return (array);
}
