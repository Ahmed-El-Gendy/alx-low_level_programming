#include "lists.h"

/**
 * sum_listint - print the sum of the list
 * @head: pointer
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
