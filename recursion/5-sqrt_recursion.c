#include "main.h"

/**
 * search_y - test for the value of y
 * @n: number to find the root of
 * @y: number to find
 *
 * Return: the value of y.
**/
int search_y(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	if (y * y > n)
	{
		return (-1);
	}
	return (search_y(n, y + 1));
}


/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number to find the root of
 *
 * Return: square root or -1 if none
**/
int _sqrt_recursion(int n)
{
	return (search_y(n, 0));
}
