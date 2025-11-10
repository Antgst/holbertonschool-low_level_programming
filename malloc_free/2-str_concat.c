#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - Concatenates two strings into a newly allocated string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails
 *
 * Description: This function allocates enough memory to hold
 * both strings s1 and s2, copies s1 followed by s2 into the new
 * buffer, and returns a pointer to the result. The resulting string
 * is null-terminated. If either input string is NULL, it is treated
 * as an empty string.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;
	int lens1;
	int lens2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	p = malloc(lens1 + lens2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < lens2; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
