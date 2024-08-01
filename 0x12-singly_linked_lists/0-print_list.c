#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: List to be printed
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	if (!h)
		return (0);

	for (count = 0; h; count++)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
	}

	return (count);
}
