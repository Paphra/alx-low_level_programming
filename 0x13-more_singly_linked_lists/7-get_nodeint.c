#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a list
 * @head: the pointer to the first element of the list
 * @index: the index for which element to get
 *
 * Return: node at the index, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *elem = head;

	while (elem != NULL)
	{
		if (i == index)
			return (elem);
		elem = elem->next;
		i++;
	}

	return (NULL);

}
