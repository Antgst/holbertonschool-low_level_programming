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
  char I = 'A';
  while (i <= 'z')
    {
      putchar (i);
      i++;
    }
  while (I <= 'Z')
    {
    putchar (I);
    I++;
    }
  return (0);
}
