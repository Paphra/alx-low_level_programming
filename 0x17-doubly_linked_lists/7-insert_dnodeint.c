#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node a given index
 * @h: pointer to the pointer of the first element
 * @idx: the index to which to insert
 * @n: the data of the new node
 *
 * Return: address of the new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int count = 0;

	new =  (dlistint_t *) malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		h = &new;
	} else
	{
		tmp = *h;
		while (tmp->next != NULL && count < idx)
		{
			tmp = tmp->next;
			count++;
		}
		if (count < idx)
			return (NULL);
		new->next = tmp;
		new->prev = tmp->prev;
		if (tmp->prev == NULL)
			tmp = new;
		else
			tmp->prev->next = new;
	}

	return (new);
}
