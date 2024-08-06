#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a listint_t node at a given location
 * @head: Pointer to head of list
 * @index: Node position to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos;
	listint_t *node = *head;
	listint_t *prev_node;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	node = *head;
	for (pos = 0; node && pos < index - 1; pos++)
		node = node->next;

	if (!node || !node->next)
		return (-1);

	prev_node = node->next;
	node->next = prev_node->next;
	free(prev_node);

	return (1);
}
