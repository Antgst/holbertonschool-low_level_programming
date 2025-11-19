#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function (parameter) on each element of an array
 * @size: the size of the array
 * @array: the array to execute the action
 * @action: pointer t the functio that we need to use
 * Return: void.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i != size; i++)
	{
		if (array != NULL)
		{
			action(array[i]);
		}
	}
}
