#include "lists.h"

/**
 * pop_listint - pop head
 * @head: pointer
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int d = 0;

	if (*head == NULL)
	{
		return (d);
	}
	node = *head;
	*head = node->next;
	d = node->n;
	free(node);
	return (d);
}
