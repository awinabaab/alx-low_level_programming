#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head node of the dlistint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = NULL;
	if (!head)
		return;

	current_node = head;
	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
