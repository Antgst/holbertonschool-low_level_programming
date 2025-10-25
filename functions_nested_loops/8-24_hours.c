#include "main.h"

/**
 * File: 8-24_hours.c
 * Author: <ton_nom>
 * Desc: Implémentation de jack_bauer.
 * jack_bauer - Affiche toutes les minutes de 00:00 à 23:59.
 *
 * Return: rien.
 */

void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
