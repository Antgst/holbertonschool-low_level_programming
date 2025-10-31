#include "main.h"

/**
 * puts_half - prints the second half of a string, then a newline
 * @str: pointer to the input string
 *
 * Description: If the length is odd, prints from index (len + 1) / 2
 *              to skip the middle character.
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
