#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the new node
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
	*head = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
	return (1);
	}

	for (unsigned int i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;

	free(current);
	return (1);
}
