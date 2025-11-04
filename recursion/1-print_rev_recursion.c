#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed string followed by a new line
 * @s: Pointer to the string to print
 *
 * Description: This function prints each character of the string in reverse
 * recursively, followed by a newline character at the end.
 *
 * Return: Nothing (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
