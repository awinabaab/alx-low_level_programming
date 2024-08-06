#include "lists.h"

/**
 * sum_listint - Sums up all the data(n) of a listint_t linked list
 * @head: Head of list
 *
 * Return: Sum of all data(n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}

	return (sum);
}
