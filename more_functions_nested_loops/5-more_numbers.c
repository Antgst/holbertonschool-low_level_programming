#include "main.h"

/**
 * more_numbers - print 10X numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int line;
	int n;

	for (line = 0; line < 14; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
