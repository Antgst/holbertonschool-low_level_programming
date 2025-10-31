#include "main.h"
#include <stdio.h>

/**
**/
int _atoi(char *s)
{
	int nb = 0;
	int element;
	int sign = 1;

	for (element = 0; s[element] != '\0'; element++)
	{
		if (s[element] == '-')
		{
			sign *= -1;
		}
		else if (s[element] >= '0' && s[element] <= '9')
		{
			nb = nb * 10 + (s[element] - '0');
		}
		else
		{
			;
		}
	}
	return (nb * sign);
}
