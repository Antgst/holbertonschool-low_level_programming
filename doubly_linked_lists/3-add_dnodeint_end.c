#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end a the dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: value to store inside the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	if (head == NULL)
	return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);

}
