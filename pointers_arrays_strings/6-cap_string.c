#include "main.h"

/**
 * cap_string - Change all firsts lettersof a word of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/

char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= ('a' - 'A');
				break;
			}
		}
	}
	return (str);
}
