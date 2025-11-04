#include <stdio.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of needle in haystack,
 *         or NULL if needle is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] !='\0'; i++)
		{
			if (haystack[j + i] != needle [i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (&haystack[j]);
		}
	}
	return (NULL);
}
