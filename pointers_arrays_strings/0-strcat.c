#include "main.h"

/**
 * _strcat - concatenate 2 strings.
 * @dest: pointer to a string, inside it we add src
 * @src: pointer to the string we need to add
 * Return: ptr, a concactenate string.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
