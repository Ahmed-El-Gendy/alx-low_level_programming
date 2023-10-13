#include "lists.h"
/**
 * get_dnodeint_at_index - print index
 * @h: head
 * @index: the index of the numper
 * Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt;

	cnt = 0;
	while (head)
	{
		if (cnt == index)
			return (head);
		cnt++;
		head = head->next;
	}
	return (NULL);
}
