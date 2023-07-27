#include "lists.h"

/**
 * list_len - gets the length of a list
 * @h: the pointer to the head element
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *elem = h;

	while (elem != NULL)
	{
		count++;
		elem = elem->next;
	}

	return (count);
}
