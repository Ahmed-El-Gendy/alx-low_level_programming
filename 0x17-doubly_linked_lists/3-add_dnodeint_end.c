#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: head
 * @n: value
 * Return: list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;
	new->prev = node;
	return (new);
}
