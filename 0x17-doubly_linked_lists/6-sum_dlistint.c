#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: pointer to the first element
 *
 * Return: sum of all data, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *elem;

	if (head == NULL)
		return (0);
	elem = head;
	while (elem != NULL)
	{
		sum += elem->n;
		elem = elem->next;
	}
	return (sum);
}
