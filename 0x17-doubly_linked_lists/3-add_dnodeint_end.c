#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of dlistint_t list
 * @head: Pointer to the head of the dlistint_t list
 * @n: Data for new node
 *
 * Return: Pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*head)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next)
		current_node = current_node->next;
	current_node->next = new_node;
	new_node->next = NULL;
	new_node->prev = current_node;

	return (new_node);
}
