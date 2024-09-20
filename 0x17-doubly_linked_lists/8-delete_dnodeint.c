#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node a given index of a
 * dlistint_t linked list
 * @head: Pointer to the head node of the  dlistint_t linked list
 * @index: Index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	dlistint_t *delete_node = NULL;
	unsigned int idx = 0;

	if (!*head)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		if (current_node && !current_node->next)
		{
			free(current_node);
			*head = NULL;
			return (1);
		}
		delete_node = current_node;
		current_node = current_node->next;
		delete_node->next = NULL;
		current_node->prev = NULL;
		*head = current_node;
		free(delete_node);
		return (1);
	}

	current_node = *head;
	while (current_node && idx++ < index - 1)
		current_node = current_node->next;

	if (!current_node)
		return (-1);

	delete_node = current_node->next;
	current_node->next = current_node->next->next;
	current_node->next->prev = current_node;
	delete_node->next = NULL;
	delete_node->prev = NULL;
	free(delete_node);

	return (1);
}
