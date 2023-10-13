#include "lists.h"
/**
 * sum_dlistint - sum of list values
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int cnt;

	cnt = 0;
	while (head)
	{
		cnt += head->n;
		head = head->next;
	}
	return (NULL);
}
