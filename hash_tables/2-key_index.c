#include "hash_tables.h"

/**
 * key_index - Get the index of a key using the djb2 hash function
 * @key: The key to hash
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
