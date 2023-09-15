#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: pointer to the first element
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *elem, *tmp;

	if (head == NULL)
		return;
	elem = head;
	while (elem != NULL)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
}
