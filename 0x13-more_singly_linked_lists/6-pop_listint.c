#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t linked list
 * @head: Pointer toHead of list
 *
 * Return: Node's data(n), or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int head_data;

	if (!head)
		return (0);

	if (!*head)
		head_data = 0;
	else
	{
		node = *head;
		if ((*head)->n)
			head_data = (*head)->n;
		*head = (*head)->next;
		free(node);
	}

	return (head_data);
}
