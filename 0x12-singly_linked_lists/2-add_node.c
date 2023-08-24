#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to the end of list
 * @head: pointer to head
 * Return: size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	while (str[len])
		len++;

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);

	(*head) = node;
	return (*head);

}
