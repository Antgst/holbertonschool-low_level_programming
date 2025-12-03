#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node on a position
 * @h: pointer to the head of the list
 * @idx: index where the node would be insert
 * @n: value of the new node
 *
 * Return: the adress of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	tmp = *h;

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	return (NULL);

	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	{
		dlistint_t *new = malloc(sizeof(dlistint_t));

		if (new == NULL)
		return (NULL);

		new->n = n;
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;

		return (new);
	}
}
