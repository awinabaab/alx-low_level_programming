#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to head of list. Function sets head to NULL
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	head = NULL;
}
