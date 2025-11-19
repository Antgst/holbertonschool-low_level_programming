#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct type_print - Use to keep a type and an display function
 * @types: the future type of element to print
 * @print_func: pointer to the function that print that type
**/
typedef struct type_print
{
	char types;
	void (*print_func)(va_list *);
} type_t;

void print_all(const char * const format, ...);
void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

#endif
