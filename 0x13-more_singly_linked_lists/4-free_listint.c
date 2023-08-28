#include "lists.h"

/**
 * free_listint -free list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
