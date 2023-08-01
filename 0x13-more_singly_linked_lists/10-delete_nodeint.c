#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer to the pointer of the first element
 * @index: the index of the element to delete
 *
 * Return: 1 - success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;
	listint_t *elem = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = elem->next;
		free(elem);
		return (1);
	}

	for (i = 0; elem != NULL && i < index - 1; i++)
		elem = elem->next;
	if (elem == NULL || elem->next == NULL)
		return (-1);
	tmp = elem->next->next;
	free(elem->next);
	elem->next = tmp;

	return (1);
}
