#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints a list of alphabets
 *
 * Description: The alphabets are in reverse order
 * Return: Always(0) Success
 */
int main(void)
{
  char alphabet;

  for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
    {
      putchar(alphabet);
    }
  putchar('\n');
  return (0);
}
