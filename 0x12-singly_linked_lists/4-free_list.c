#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: List to be freed
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *node;

	if (!head)
		return;

	if (!head->next)
	{
		free(head->str);
		free(head);
	}
	else
	{
		while (head)
		{
			node = head;
			head = head->next;
			free(node->str);
			free(node);
		}
	}
}
