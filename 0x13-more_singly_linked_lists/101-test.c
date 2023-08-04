#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a list
 * @head: the pointer to the first element
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head, *loop = NULL;
	int detected = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;
		if ((head == loop || slow == fast) && count > 0)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			loop = slow;
			detected = 1;
		}
		if (head->next == loop && count > 0 && detected)
		{
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			break;
		}
		head = head->next;
	}
	return (count);
}
