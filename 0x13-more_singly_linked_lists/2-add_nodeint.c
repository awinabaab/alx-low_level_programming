#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Head of list
 * @n: Data of node
 *
 * Return: Address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*head)
		new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
