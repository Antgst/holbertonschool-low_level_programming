#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while ((*d++ = *src++) != '\0')
		;

	return dest;
}
