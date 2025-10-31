#include "main.h"

/**
 * _strcat - concatenate 2 strings.
 * @dest: pointer to a string, inside it we add src
 * @src: pointer to the string we need to add
 * Return: ptr, a concactenate string.
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
		d++;
	while (*src != '\0')
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
