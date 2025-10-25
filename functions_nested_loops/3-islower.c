#include "main.h"

/**
* _islower - Indique si les lettres sont en minuscule
* int c: est l'alphabet
* Return: met l'alphabet en minuscule
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
