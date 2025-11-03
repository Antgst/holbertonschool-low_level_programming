#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: pointer to the memory area s
 * @b: constant byte b
 * @n: iteration
 * Return: the pointer
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
