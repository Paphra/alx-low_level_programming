#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the pointer of the first element
 *
 * Return: the data of the head node, else 0 - if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
