#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table
 * @key: the key
 * @size: size of the hash table
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
