#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the pointer to the head node
 * @str: string value of the node
 *
 * Return: the addess to the new node, else NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *elem = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
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

/**
 * _strlen - get string length
 * @str: the string
 *
 * Return: string length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
