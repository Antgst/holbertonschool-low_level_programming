#include <stdio.h>

/**
 * _strchr - Display the c's characteres, betwin c in a string
 * @s: pointer to the start of of a string
 * @c: charactere
 * Return: NULL
**/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
