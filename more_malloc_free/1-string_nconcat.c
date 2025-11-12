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
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_s1;
	unsigned int len_s2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	while (n > len_s2)
	{
		n = len_s2;
	}
	p = malloc(len_s1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{ p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
