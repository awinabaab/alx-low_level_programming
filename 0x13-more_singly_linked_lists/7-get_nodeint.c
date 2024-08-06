#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Head of list
 * @index: Index to return, starting at 0
 *
 * Return: Pointer to node at index @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;
	for (count = 0; count < index; count++)
	{
		if (node && node->next)
			node = node->next;
		else
			node = NULL;
	}

	return (node);
}
