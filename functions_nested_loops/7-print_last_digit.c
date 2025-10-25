#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d’un entier puis le renvoie.
 * @n: entier à traiter
 *
 * Return: valeur absolue du dernier chiffre (0–9).
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
