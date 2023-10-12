#include "lists.h"

/**
 * add_dnodeint - add node to begin
 * @head: head
 * @n: value
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
