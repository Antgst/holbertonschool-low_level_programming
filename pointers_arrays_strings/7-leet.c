#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/

char *leet(char *str)
{
	int i;
	int j;
	char from[] = "aAeEoOtTlL";
	char to[]   = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (str[i] == from[j])
			{
				str[i] = to[j];
				break;
			}
		}
	}
	return (str);
}
