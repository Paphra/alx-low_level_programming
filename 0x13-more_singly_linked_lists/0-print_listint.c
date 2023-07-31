#include "lists.h"
#include <stdio.h>

/**
 * prints all elements of listint_t list
 * @h: pointer to the first element
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *elem = h;

	if (elem == NULL)
		return (0);
	while (elem != NULL)
	{
		printf("%d\n", elem->n);
		elem = elem->next;
		count++;
	}

	return (count);
}
