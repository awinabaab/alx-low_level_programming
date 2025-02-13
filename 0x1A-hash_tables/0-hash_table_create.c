#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the hash table array
 *
 * Return: a pointer to the newly created hash table on success,
 * returns NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
