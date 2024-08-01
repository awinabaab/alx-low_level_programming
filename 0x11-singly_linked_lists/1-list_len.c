#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Linked list
 *
 * Return: Number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int len;

	if (!h)
		return (0);

	for (len = 0; h; len++)
		h = h->next;

	return (len);
}
