#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	{
		int i;
		int j;
		int k;

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
