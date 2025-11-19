#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints the numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int value;

	if (n == 0)
	{
		printf("\n");

		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, int);

		printf("%d", value);

		if (separator != NULL && i < n - 1)

			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
