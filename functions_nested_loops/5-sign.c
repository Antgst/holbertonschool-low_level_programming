#include "main.h"

/**
 * print_sign - Affiche le signe d'un entier et retourne un indicateur.
 * @n: entier à évaluer
 *
 * Return: 1 si n > 0 (imprime '+'),
 *         0 si n == 0 (imprime '0'),
 *         -1 si n < 0 (imprime '-').
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
	return (0);
}
