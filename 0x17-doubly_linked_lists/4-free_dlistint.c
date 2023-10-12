#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head)
		while (head->prev)
			head = head->prev;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
