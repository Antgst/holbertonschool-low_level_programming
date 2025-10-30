#include "main.h"

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
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
		start = len - ((len + 1) / 2);
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
