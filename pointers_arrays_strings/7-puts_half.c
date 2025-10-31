/**#include "main.h"

 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.


void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = len - ((len + 1) / 2);
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
*/

#include "main.h"

/**
 * puts_half - prints the second half of a string, then a newline
 * @str: pointer to the input string
 *
 * Description: If the length is odd, prints the last (length + 1) / 2 chars.
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = len - ((len + 1) / 2);

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
