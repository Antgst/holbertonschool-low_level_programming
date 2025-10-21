#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (int i = 0; i <= 9; i++)
{
	if (i) { putchar(','); putchar(' '); }
	putchar('0' + i);
}
putchar('\n');

 return (0);

}
