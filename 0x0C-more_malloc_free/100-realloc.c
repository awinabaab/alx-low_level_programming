#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Memory block to be reallocated
 * @old_size: Old size of @ptr
 * @new_size: New size of reallocated @ptr
 *
 * Return: Pointer to newly allocated @ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int sub;

	if (!ptr)
		return (malloc(new_size));

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!new_size)
		return (ptr);

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	if (new_size > old_size)
		for (sub = 0; sub < old_size; sub++)
			new_ptr[sub] = old_ptr[sub];

	if (old_size > new_size)
		for (sub = 0; sub < new_size; sub++)
			new_ptr[sub] = old_ptr[sub];

	free(old_ptr);
	return (new_ptr);
}
