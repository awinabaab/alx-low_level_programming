#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Head of list
 * @index: Index to return, starting at 0
 *
 * Return: Data of node at index @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return (NULL);

	for (count = 0; count < index; count++)
		head = head->next;

	return (head);
}
