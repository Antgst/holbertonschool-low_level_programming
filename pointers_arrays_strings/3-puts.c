#include "main.h"
#include <stdio.h>

/**
 * _puts - updates the value it points.
 * @str: string
 * Return: 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
