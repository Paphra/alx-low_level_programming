#include "lists.h"

/**
 * dlistint_len - finds the number of elements
 * @h: pointer to the first element
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = (dlistint_t *) h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
