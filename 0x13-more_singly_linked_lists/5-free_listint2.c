#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer of the first element of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *elem;

	while (*head != NULL)
	{
		elem = *head;
		*head = (*head)->next;
		free(elem);
	}
	*head = NULL;
}
