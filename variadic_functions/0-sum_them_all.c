#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all his parameters
 * @n: numbers of arguments to sum
 *
 * Return: the sum of all the parameters, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)

{
	int sum = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(ap, int);
		sum += value;
	}

	va_end(ap);

	return (sum);
}
