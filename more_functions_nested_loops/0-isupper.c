#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if is upper.
 * @c : index
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 32 && c <= 126)
	{
		return (0);
	}
	return (0);
}
