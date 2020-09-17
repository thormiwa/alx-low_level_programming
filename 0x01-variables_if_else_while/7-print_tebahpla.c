#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints a list of alphabets
 * in reverse
 * Description: The reverse alphabets
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
