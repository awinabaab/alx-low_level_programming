#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value of @key in a hash table
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: value of key or NULL if @key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
