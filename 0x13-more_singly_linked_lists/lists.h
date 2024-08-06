#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Returns the number of elements in a linked listint_t list */
size_t listint_len(const listint_t *h);

/* Adds a node at the beginning of a listint_t linked list */
listint_t *add_nodeint(listint_t **head, const int n);

/* Adds a node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Frees a listint_t list */
void free_listint(listint_t *head);

/* Frees a listint_t list and sets @head to NULL */
void free_listint2(listint_t **head);

/* Deletes the head node of a listint_t linked list */
int pop_listint(listint_t **head);

/* Returns the nth node of a listint_t linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Sums all the data(n) of a listint_t linked list */
int sum_listint(listint_t *head);

/* Inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

#endif /* #ifndef LISTS_H */
