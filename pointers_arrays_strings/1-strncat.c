#include "main.h"

/**
 * _strncat - concatenate 2 strings.
 * @dest: pointer to a string, inside it we add src
 * @src: pointer to the string we need to add
 * @n: length of src
 * Return: ptr, a concactenate string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
