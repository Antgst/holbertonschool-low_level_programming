#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char i = 'a';
  char m = 'A';
  while (i <= 'z')
    {
    putchar (i);
    i++;
    }
  while (m <= 'Z')
    {
    putchar (m);
    m++;
    }
    putchar ('\n')
  return (0);
}
