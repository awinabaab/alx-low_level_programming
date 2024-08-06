#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head of the list
 * @idx: Index to be inserted at
 * @n: Data of new node
 *
 * Return: Address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node;
	unsigned int pos;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	if (idx == 0)
	{
		new_node = *head;
		*head = new_node;
		return (*head);
	}

	node = *head;
	for (pos = 0; pos < idx - 1; pos++)
		node = node->next;

	if (!node)
		return (NULL);

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
