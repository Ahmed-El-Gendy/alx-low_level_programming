#include "lists.h"

/**
 * add_nodeint_end - add node in the end
 * @head: pointer
 * @n: int
 * Return: pointer to list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *h = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
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
