#include "main.h"

/**
 * _islower - Vérifie si un caractère est une lettre minuscule ASCII.
 * @c: code du caractère à tester
 *
 * Return: 1 si @c est entre 'a' et 'z', sinon 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
