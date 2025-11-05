#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array of 8 characters per row (representing the board)
 *
 * Return: void
 **/

void print_chessboard(char (*a)[8])
{
	unsigned char rows;
	unsigned char columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
