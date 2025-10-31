#include "main.h"
#include <stdio.h>

/**
 * _strcpy - make a copy
 * @dest: destination
 * @src: source
 * Return: the copy
**/

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while ((*d++ = *src++) != '\0')
		;

	return (dest);
}
