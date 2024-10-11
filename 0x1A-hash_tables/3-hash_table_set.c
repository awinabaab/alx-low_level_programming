#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: key
 * @value: value associated with @key
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash = 0;
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (!key)
		return (0);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);

	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
