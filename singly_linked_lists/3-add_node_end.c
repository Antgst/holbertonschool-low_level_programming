#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of the list_t list
 * @str: pointer to the string to be stored in the new node
 * @head: double pointer to the head of the list
 *
 * Return: the adress of the new element, or NULL if it failed
*/

 list_t *add_node_end(list_t **head, const char *str)
 {
	list_t *new_node;
	new_node = malloc(sizeof(list_t));

	if (new_node = NULL)
	return (NULL);
}