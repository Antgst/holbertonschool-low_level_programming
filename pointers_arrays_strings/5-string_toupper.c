#include "main.h"

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */

char *string_toupper(char *str)

	int car;

{
	for (car = 0; str[car] != '\0'; car++)
	{
		if (str[car] >= 97 && str[car] <= 122)
		{
			str[car] = str[car] - 32;
		}
	}
	return (str);
}
