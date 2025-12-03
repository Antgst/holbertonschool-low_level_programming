#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete the note at the index
 * @head: pointer to the head of the list
 * @index: position of the node to delete
 *
 * Return: 1 if success, or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	return (-1);

	if (tmp->prev != NULL)
	tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
	tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
