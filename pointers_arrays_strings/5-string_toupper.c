#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/

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
