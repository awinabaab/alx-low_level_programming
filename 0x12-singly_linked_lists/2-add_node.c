#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning if a list_t list
 * @head: Head of linked list
 * @str: String
 *
 * Return: Address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (!*head)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (new);
}
