#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
