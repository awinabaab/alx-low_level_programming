#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a dlistint_t list
 * @h: Pointer to the head node of the dlistint_t list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;
	const dlistint_t *node = NULL;

	if (!h)
		return (element_count);

	node = h;
	while (node)
	{
		element_count++;
		node = node->next;
	}
	return (element_count);
}
