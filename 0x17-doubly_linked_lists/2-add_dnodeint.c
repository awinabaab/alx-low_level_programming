#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the head node of the dlistint_t list
 * @n: Data for the new node
 *
 * Return: Pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *head_node = NULL;

	head_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*head)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	new_node->prev = NULL;
	head_node->prev = new_node;
	new_node->next = head_node;
	*head = new_node;

	return (new_node);
}
