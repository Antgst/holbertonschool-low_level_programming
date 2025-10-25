#include "main.h"

/**
 * _abs - Calcule la valeur absolue d’un entier.
 * @n: entier à convertir en valeur absolue
 *
 * Return: valeur absolue de @n.
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
