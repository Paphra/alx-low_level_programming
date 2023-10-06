#include "hash_tables.h"

/**
 * key_index - gets the indes of a given key
 * @key: the key to hash
 * @size: size of the hash_table
 * Return: the index of a hashed key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	ULI hash, slot;

	hash = hash_djb2(key);
	slot = hash % size;

	return (slot);
}
