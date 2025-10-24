#include "main.h"

/**
 * is_lower - Short description, single line
 * @c: Description of parameter c
 *
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
