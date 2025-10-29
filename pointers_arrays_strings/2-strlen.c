#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

/**
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

*/

size_t _strlen_ptr(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}
