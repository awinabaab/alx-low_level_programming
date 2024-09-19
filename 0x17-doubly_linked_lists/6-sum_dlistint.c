#include "lists.h"

/**
 * sum_dlistint - Sums all the data(n) of a dlistint_t linked list
 * @head: Pointer to the head of the dlistint_t pointer
 *
 * Return: Sum of all data elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = NULL;
	int sum = 0;

	if (!head)
		return (sum);

	current_node = head;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
