#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0; 
	int j = 0;
	char tmp;

	while (s[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
