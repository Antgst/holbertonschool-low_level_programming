#include "main.h"

/**
 * times_table - Affiche la table de multiplication de 0 à 9.
 *
 * Return: rien.
 */

void times_table(void)
{
	int a, b, resultat;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			resultat = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (resultat < 10)
					_putchar(' ');
			}
			if (resultat < 10)
				_putchar(resultat + '0');
			else
			{
				_putchar((resultat / 10) + '0');
				_putchar((resultat % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
