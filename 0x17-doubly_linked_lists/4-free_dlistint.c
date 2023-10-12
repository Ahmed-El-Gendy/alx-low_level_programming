#include "lists.h"
/**
 * free_dlistint - free list
 * @head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head->prev)
		head = head->prev;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
