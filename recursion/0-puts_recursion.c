#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string to print
 *
 * Description: This function prints each character of the string
 * recursively, followed by a newline character at the end.
 *
 * Return: Nothing (void)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
