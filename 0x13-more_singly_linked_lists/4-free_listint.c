#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head of list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (!head)
		return;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
