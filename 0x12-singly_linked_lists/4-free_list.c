#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free the list
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *h = head;

	while (h)
	{
		*h = *head;
		head = head->next;
		free(h);
	}
	free(head);
}
