#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - Singly linked list
 * @str: String - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prints all elements of a list_t list */
size_t print_list(const list_t *h);

/* Returns the number of elements in a linked list_t list */
size_t list_len(const list_t *h);

/* Adds a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);

/* Adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* Fress a list_t list */
void free_list(list_t *head);

/* Prints a string before the main function is executed */
void first(void) __attribute__((constructor));

#endif /* ifndef LISTS_H */
