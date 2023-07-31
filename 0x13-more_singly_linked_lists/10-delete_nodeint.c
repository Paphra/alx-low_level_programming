#include "lists.h"

/**
 * delete_nodeint - deletes the node at index of a list
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

	while (elem != NULL)
	{
		if (i == index)
		{
			tmp = elem;
		}
	}
	return (-1);
}
