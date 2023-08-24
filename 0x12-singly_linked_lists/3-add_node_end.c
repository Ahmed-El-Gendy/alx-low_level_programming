#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end
 * @head: the head of list
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
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
