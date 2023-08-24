#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: the head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;
	unsigned int len = 0;
	list_t *h = *head;

	node = malloc(sizeof(list_t));
	while (str[len])
		len++;

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (h->next)
		h = h->next;
	h->next = node;
	return (node);

}
