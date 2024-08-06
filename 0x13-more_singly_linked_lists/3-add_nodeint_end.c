#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head of list
 * @n: Data of node
 *
 * Return: Pointer to the new node, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *start_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		while (start_node->next)
			start_node = start_node->next;
		start_node->next = new_node;
	}

	return (new_node);
}
