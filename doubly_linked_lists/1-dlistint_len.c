#include "lists.h"

/**
 * dlistint_len - prints the number of elements
* @h: the head of the linked list
*
* Return: the number of elements printed
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	return (0);

	for (; h != NULL; h = h->next)
	len++;

	return (len);

}
