#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
  char c;
  char C;
  c = 'a';
  C = 'A';
  while (c <= 'z')
    {
      putchar (c);
      c++;
    }
  while (C <= 'Z')
    {
      putchar (C);
      C++;
    }
  putchar ('\n');
  return (0);
}
