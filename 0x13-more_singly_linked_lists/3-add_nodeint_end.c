#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to the first element of the list
 * @n: value of the new node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *elem = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (elem == NULL)
	{
		elem = new_node;
		*head = elem;
	} else
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = new_node;
	}

	return (new_node);
}
