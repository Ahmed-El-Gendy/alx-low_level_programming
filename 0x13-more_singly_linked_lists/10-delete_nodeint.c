#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer
 * @index: index
 * Return: pointer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;

	listint_t *temp, *ne;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index != 0)
	{
	while (temp)
	{
		if (temp == NULL)
			return (-1);
		if (nodes == index - 1)
		{
			ne = temp->next;
			temp->next = ne->next;
			free(ne);
			return (1);
		}
		nodes++;
		temp = temp->next;
	}
	}
	else
	{
		ne = temp->next;
		free(*head);
		*head = ne;
		return (1);
	}
	return (-1);
}
