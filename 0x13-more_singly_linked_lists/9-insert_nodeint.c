#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes = 0;

	listint_t *temp, *list;

	if (*head == NULL && idx != 0)
		return (NULL);

	list = malloc(sizeof(listint_t));

	temp = *head;
	if (list == NULL)
		return (NULL);
	list->n = n;
	if (idx != 0)
	{
	while (temp)
	{
		if (temp == NULL)
			return (NULL);
		if (nodes == idx - 1)
		{
			list->next = temp->next;
			temp->next = list;
			return (list);
		}
		nodes++;
		temp = temp->next;
	}
	}
	else
	{
		list->next = temp;
		temp = list;
		return (list);
	}
	return (NULL);
}
