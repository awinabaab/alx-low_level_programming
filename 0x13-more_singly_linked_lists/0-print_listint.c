#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head of list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
