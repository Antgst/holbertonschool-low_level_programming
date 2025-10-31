#include "main.h"

/**
 * print_line - check the number of lines
 *@n: number of line.
 * Return: a line.
 */

void print_line(int n)
{
	int i;
	{
		if (n > 0)
		{
			for (i = 0; i < n; i++)
				_putchar('_');
		}
	}
	_putchar ('\n');
}
