#include "main.h"
#include <stdio.h>

/**
 * swap_int - changer les valeurs
 * @a entier
 * @b entier
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
