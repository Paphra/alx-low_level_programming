#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer of the first element of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *elem, *tmp;

	elem = *head;
	while (elem != NULL)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
	*head = NULL;
	head = NULL;
}
