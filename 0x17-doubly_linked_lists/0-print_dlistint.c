#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to head node of doubly linked list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *node = NULL;

	if (!h)
		return (node_count);

	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node_count++;
		node = node->next;
	}
	return (node_count);
}
