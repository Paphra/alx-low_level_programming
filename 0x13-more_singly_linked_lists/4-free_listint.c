#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *elem, *tmp;

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
