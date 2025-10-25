#include "main.h"

/**
 * _abs - Calcule la valeur absolue d’un entier.
 * @n: entier d’entrée
 *
 * Return: valeur absolue de @n.
 */

int _abs(int n)

{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
