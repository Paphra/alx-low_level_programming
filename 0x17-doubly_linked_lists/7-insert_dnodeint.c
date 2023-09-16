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

	if (!h)
		return (NULL);

	new =  (dlistint_t *) malloc(sizeof(dlistint_t *));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*h) && idx == 0)
	{
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp)
	{
		if (count == idx)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = new;
			else
				*h = new;
			tmp->prev = new;
			return (new);
		}
		if (!tmp->next && count + 1 == idx)
		{
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}

	free(new);
	return (NULL);
}
