#include "lists.h"
#include <stdio.h>

/**
* print_list - function that print a list of elements
* @h: pointer to the first node
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	/**
	 * ou while (h)
	 */
	{
		if (h->str)
		/*
		* ou if (h->str != NULL)
		*/
			printf("[%u] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
