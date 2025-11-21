#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all: Print all the operations
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to be printed
 * 
 * Return: nothing 
 */

void print_all(const char * const format, ...)
 {
    va_list ap;
    unsigned int i = 0;
    char *str;
    char *sep = "";

    va_start (ap, format);
    
    while (format && format[i])
    {







        
        i++;
    }
















    va_end (ap);


 }