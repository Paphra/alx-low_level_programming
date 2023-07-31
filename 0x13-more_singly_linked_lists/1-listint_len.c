#include "lists.h"

/**
 * listint_len - gets the number of elements ina list
 * @h: pointer to the first element
 *
 * Return: number of elements/length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *elem = h;

	while (elem != NULL)
	{
		len++;
		elem = elem->next;
	}

	return (len);
}
