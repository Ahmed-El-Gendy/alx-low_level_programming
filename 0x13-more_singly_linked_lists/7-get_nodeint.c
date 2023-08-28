#include "lists.h"

/**
 * get_nodeint_at_index - print the index
 * @head: pointer
 * @index: index
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	while (head)
	{
		if (head == NULL)
			return (NULL);
		if (nodes == index)
		{
			return (head);
		}
		nodes++;
		head = head->next;
	}
	return (NULL);
}
