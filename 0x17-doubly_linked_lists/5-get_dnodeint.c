#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to head node of the dlistint_t list
 * @index: Index of node to return
 *
 * Return: NULL if node doesn't exist, else pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	current_node = head;
	while (current_node && idx++ < index)
		current_node = current_node->next;

	if (!current_node)
		return (NULL);

	return (current_node);
}
