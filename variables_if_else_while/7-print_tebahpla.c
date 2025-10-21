#include <stdio.h>
#include <stdlib.h>

/**                                                                                                                                                                                                            
 * main - Entry point                                                                                                                                                                                          
 *                                                                                                                                                                                                             
 * Return: Always 0 (Success)                                                                                                                                                                                  
 */

int main(void)
{
  char i;
  char m;

  i = 'z';
  while (i >= 'a')
    {
    putchar (i);
    i--;
    }

  putchar ('\n');
  return (0);
}
