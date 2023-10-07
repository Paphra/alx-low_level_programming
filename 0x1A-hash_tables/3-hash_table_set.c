#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key to set
 * @value: the value to set
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ULI slot;
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[slot] == NULL)
		ht->array[slot] = new_node;
	else
	{
		hash_node_t *current = ht->array[slot];
		while (current->next)
			current = current->next;
		current->next = new_node;
	}

	return (1);
}
