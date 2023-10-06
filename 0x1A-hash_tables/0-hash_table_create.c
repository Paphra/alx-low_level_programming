#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 * Return: pointer to the newly created has table
 */
hash_table_t *hash_table_create(ULI size)
{
	hash_table_t *ht;
	ULI i;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
