#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 strings
 * @s1: pointer to the start of the string
 * @s2: pointer to the start of the string
 * Return: the diference
**/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] !='\0' && s2[i] !='\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
