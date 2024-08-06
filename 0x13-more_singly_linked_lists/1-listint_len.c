#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Head of list
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
