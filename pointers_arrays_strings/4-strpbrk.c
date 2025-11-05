#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Finds the first character in s that matches any in accept
 * @s: The main string to search through
 * @accept: The string containing accepted characters
 *
 * Return: Pointer to the first matching character in s, or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;
	int j;
	int k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				return (i = &s[j]);
			}
		}
	}
	return (NULL);
}
