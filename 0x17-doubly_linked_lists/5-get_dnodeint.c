#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a list
 * @head: pointer the first node
 * @index: index of the nth node
 *
 * Return: the nth node, NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *elem;

	if (head == NULL)
		return (NULL);
	elem = head;
	while (elem != NULL && count < index)
	{
		elem = elem->next;
		count++;
	}
	if (count == index)
		return (elem);
	return (NULL);
}
