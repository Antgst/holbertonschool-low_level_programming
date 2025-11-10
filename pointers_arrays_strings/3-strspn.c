#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: string of allowed characters
 * Return: number of bytes from the start of s that are in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *i;
	char *j;
	int match;

	for (i = s; *i != '\0'; i++)
	{
		match = 0;
		for (j = accept; *j != '\0'; j++)
		{
			if (*i == *j)
			{
				match = 1;
				break;
			}
		}
		if (match)
			count++;
		else
			break;
	}
	return (count);
}