#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - return the sum of all the n of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all n, or 0 if it failed
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
