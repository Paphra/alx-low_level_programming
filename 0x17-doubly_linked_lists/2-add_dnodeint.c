#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the pointer of the first element
 * @n: the data of the new node
 *
 * Return: address of a new element, NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = (dlistint_t *)malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = (int) n;
	new->next = tmp;
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;

	return (new);
}
