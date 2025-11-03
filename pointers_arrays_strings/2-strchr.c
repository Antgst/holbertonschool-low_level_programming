#include "main.h"
#include <stdio.h>

/**
 * _strchr - Display the c's characteres, betwin c in a string
 * @s: pointer to the start of of a string
 * @c: charactere
 * Return: NULL
**/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}
