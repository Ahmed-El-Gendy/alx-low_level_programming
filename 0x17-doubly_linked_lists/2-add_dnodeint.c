#include "lists.h"

/**
 * add_dnodeint - add node to begin
 * @head: head
 * @n: value
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	node = *head;
	if (node)
	{
		while (node->prev)
			node = node->prev;
	}
	new->next = node;
	if (node)
		node->prev = new;
	(*head) = new;
	return (new);
}
