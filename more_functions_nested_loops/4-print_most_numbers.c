#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - imprime des nombres sauf certains
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char n;
	n = 48;
	while (n <= 57)
	{
		if (n != 50 && n != 52)
			_putchar (n);
		n++;
		_putchar('\n');
		return (0);
	}
}
