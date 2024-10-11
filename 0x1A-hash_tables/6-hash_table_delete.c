#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;
	hash_node_t *delete = NULL;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			delete = node;
			node = node->next;
			free(delete->key);
			free(delete->value);
			free(delete);
		}
		free(node);
	}
	free(ht->array);
	free(ht);
}
