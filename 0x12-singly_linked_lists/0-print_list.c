#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list, the head element
 *
 * Return: number of nodes/elements
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *elem = h;

	if (h == NULL)
		return (0);
	
	while (elem != NULL)
	{
		if (elem->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", elem->len, elem->str);
		elem = elem->next;
		count++;
	}

	return (count);
}
