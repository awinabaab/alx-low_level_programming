#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a node at the end of a list_t list
 * @head: Linked list
 * @str: Node data
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}

	return (new);
}
