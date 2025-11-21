#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @ap: list of arguments
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer
 * @ap: list of arguments
 *
 * Return: void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: list of arguments
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: list of arguments
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything, according to a format string
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list ap;
	unsigned int i = 0, j;
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].type != NULL)
		{
			if (format[i] == *(printers[j].type))
			{
				printf("%s", sep);
				printers[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
