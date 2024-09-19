#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index of
 * dlistint_t list
 * @h: Pointer to head of the dlistint_t list
 * @idx: Index to insert new node at
 * @n: Data for new node
 *
 * Return: Pointer to new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = NULL;
	dlistint_t *new_node = NULL;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*h || idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	current_node = *h;
	while (current_node && index++ < idx - 1)
		current_node = current_node->next;

	if (!current_node)
	{
		free(new_node);
		return (NULL);
	}

	if (current_node && !current_node->next)
	{
		current_node->next = new_node;
		new_node->prev = current_node;
		return (new_node);
	}

	new_node->next = current_node->next;
	current_node->next->prev = new_node;
	new_node->prev = current_node;
	current_node->next = new_node;

	return (new_node);
}
