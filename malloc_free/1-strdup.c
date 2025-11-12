#include "main.h"
#include <stdio.h>
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
 * _strdup - Duplicates a string to a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
