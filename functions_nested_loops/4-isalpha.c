#include "main.h"

/**
 * _isalpha - Vérifie si un code correspond à une lettre ASCII.
 * @c: code du caractère à tester
 *
 * Return: 1 si @c est une lettre (a–z ou A–Z), sinon 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
