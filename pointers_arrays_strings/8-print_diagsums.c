#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix (number of rows or columns).
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

		for (i = 0; i < size; i++)
		{
			sum1 += (a[i * size + i]);
			sum2 += (a[i * size + (size - 1 - size - i)]);
		}
		printf("%d %d", sum1, sum2);
}
