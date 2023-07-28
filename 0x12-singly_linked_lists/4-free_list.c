#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the head element pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *elem;
	list_t *next;

	if (head != NULL)
	{
		elem = head;
		while (elem != NULL)
		{
			if (elem->str != NULL)
				free(elem->str);
			next = elem->next;
			free(elem);
			elem = next;
		}
	}
}
