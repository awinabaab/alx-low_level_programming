#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to head of linked list
 *
 * Return: Pointer to fist node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}

	*head = node;
	
	return (*head);
}
