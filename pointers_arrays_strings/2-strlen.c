#include <stdio.h>

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
