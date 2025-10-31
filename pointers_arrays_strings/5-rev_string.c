#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the len of an str.
 * @s: char *s
 * Return: the len.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
