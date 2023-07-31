#include "lists.h"

/**
 * sum_listint - gets the sum of all the data(n) of a list
 * @head: pointer of the first element in the list
 *
 * Return: sum of data, else 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *elem = head;

	if (head == NULL)
		return (0);
	while (elem != NULL)
	{
		sum += elem->n;
		elem = elem->next;
	}

	return (sum);
}
