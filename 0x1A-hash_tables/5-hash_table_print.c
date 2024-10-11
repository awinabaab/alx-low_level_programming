#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int size = 0;
	unsigned long int idx = 0;
	int comma = 1;

	if (!ht)
		return;

	size = ht->size;

	printf("{");
	for (idx = 0; idx < size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (!comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
