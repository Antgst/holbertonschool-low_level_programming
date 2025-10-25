#include "main.h"

/**
 * File: _islower.c
 * Author: Antoine
 * Desc: <Résumé très court du fichier (1 phrase).>
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
