#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the pointer to the first element
 * @n: integer data value
 *
 * Return: address of the new node, Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = NULL;
	new->n = (int) n;
	tmp->next = new;

	return (new);
}
