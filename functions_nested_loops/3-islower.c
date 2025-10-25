#include "main.h"

/**
* _islower - Indique si les lettres sont en minuscule
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
