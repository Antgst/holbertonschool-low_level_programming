#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'a' && c<= 'z')
	{
		return (0);
	}
	else (c >= 32 && c <= 126)
	     {
		     return (0);
	     }
	return (1);
}
