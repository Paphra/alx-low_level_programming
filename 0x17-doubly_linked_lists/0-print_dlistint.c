#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first element of the list
 *
 * Return: number of the items
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = (dlistint_t *)h;
	while (tmp != NULL)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (count);
}
