#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the input string
 *
 * Description: Counts all '+' and '-' seen before the first digit to set
 * the sign. Accumulates consecutive digits, then stops at the first
 * non-digit after starting. If no digit exists, returns 0.
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int nb = 0;
	int element;
	int sign = 1;
	int started = 0;

	for (element = 0; s[element] != '\0'; element++)
	{
		if (!started && (s[element] == '-' || s[element] == '+'))
		{
			if (s[element] == '-')
				sign *= -1;
		}
		else if (s[element] >= '0' && s[element] <= '9')
		{
			started = 1;
			nb = nb * 10 + (s[element] - '0');
		}
		else if (started)
		{
			break;
		}
	}

	return (nb * sign);
}
