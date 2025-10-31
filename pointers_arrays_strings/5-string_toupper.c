#include "main.h"

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */

char *string_toupper(char *str)
{
	int mot;

	for (mot = 0; str[mot] != '\0'; mot++)
	{
		if (str[mot] >= 97 && str[mot] <= 122)
		{
			str[mot] = str[mot] - 32;
		}
	}
	return (str);
}
