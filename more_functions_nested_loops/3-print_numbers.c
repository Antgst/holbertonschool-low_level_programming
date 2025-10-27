#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Imprime les nombres
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
