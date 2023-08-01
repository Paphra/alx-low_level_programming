#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of the first element of the list
 * @idx: the index into which to insert the new node
 * @n: the data of the new node
 *
 * Return: address of the new node, else NULL if failed
 * - also return NULL if can not be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *elem;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	elem = *head;
	while (elem != NULL)
	{
		if ((i + 1) == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = elem->next;
			elem->next = new_node;

			return (new_node);
		}
		i++;
		elem = elem->next;
	}

	return (NULL);
}
