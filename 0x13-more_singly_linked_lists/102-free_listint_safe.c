#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the pointer of the first element
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *elem = *h, *next = NULL, *prev = NULL;

	while (elem != NULL)
	{
		next = elem->next;
		elem->next = prev;
		count++;
		if (next != NULL && next->next == elem)
		{
			free(elem);
			break;
		}
		prev = elem;
		elem = next;
	}
	*h = NULL;
	return (count);
}
