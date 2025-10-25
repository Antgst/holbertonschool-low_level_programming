#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
