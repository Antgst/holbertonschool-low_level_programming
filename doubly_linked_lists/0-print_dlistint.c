#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print the elements of dlistint_t list
 * @h: the head of the linked list
 *
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t len = 0;

	if (h == NULL)
	return (0);

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		len++;
	}

	return (len);

}
