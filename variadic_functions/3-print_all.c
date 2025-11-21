#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a charactere
 * @list: the list of argument
 * Return: void
**/
void print_char(va_list *list)
{
	printf("%c", va_arg(*list, int));
}

/**
 * print_int - Print an integer
 * @list: the list of argument
 * Return: void
**/
void print_int(va_list *list)
{
	printf("%d", va_arg(*list, int));
}

/**
 * print_float - Print a flaot
 * @list: the list of argument
 * Return: void
**/
void print_float(va_list *list)
{
	printf("%f", va_arg(*list, double));
}

/**
 * print_string - Print a string
 * @list: the list of argument
 * Description: Check directly if the string is NULL and print (nil)
 * Return: void
**/
void print_string(va_list *list)
{
	char *s;

	s = va_arg(*list, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", s);
}

/**
 * print_all - prints anythings
 * @format: a list of types of arguments
 * Return: void.
**/
void print_all(const char * const format, ...)
{
	type_t type_print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_list argument_list;

	unsigned int format_index, types_index;
	char *separator;

	separator = "";
	format_index = 0;
	va_start(argument_list, format);

	while (format != NULL && format[format_index] != '\0')
	{
		types_index = 0;
		while (type_print[types_index].types != 0)
		{
			if (format[format_index] == type_print[types_index].types)
			{
				printf("%s", separator);
				type_print[types_index].print_func(&argument_list);
				separator = ", ";
				break;
			}
			types_index++;
		}
		format_index++;
	}

	va_end(argument_list);
	printf("\n");
}