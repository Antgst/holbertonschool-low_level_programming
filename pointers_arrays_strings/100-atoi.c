#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the input string
 *
 * Description: Compte tous les signes '+' et '-' avant le premier chiffre
 * pour déterminer le signe. Accumule uniquement les chiffres consécutifs,
 * s'arrête au premier non-chiffre après le début. Évite l'overflow signé
 * sans <limits.h> en bornant contre INT_MAX/INT_MIN dérivés.
 *
 * Return: the converted integer, or 0 if no digit is found
 */

int _atoi(char *s)
{
	int nb = 0;
	int element;
	int sign = 1;
	int started = 0;
	unsigned int umax = ~0U;
	int imax = (int)(umax >> 1);
	int imin = -imax - 1;

	for (element = 0; s[element] != '\0'; element++)
	{
		if (!started && (s[element] == '-' || s[element] == '+'))
		{
			if (s[element] == '-')
				sign = -sign;
		}
		else if (s[element] >= '0' && s[element] <= '9')
		{
			int d = s[element] - '0';

			started = 1;

			if (sign == 1)
			{
				if (nb > (imax - d) / 10)
					return (imax);
				nb = nb * 10 + d;
			}
			else
			{
				if (nb < (imin + d) / 10)
					return (imin);
				nb = nb * 10 - d;
			}
		}
		else if (started)
		{
			break;
		}
	}
	return (nb);
}
