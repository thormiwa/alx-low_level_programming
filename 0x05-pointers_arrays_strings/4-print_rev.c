#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Points to string that will be printed
 *
 * Return: No return value. Function is void.
 */

void print_rev(char *s)
{
  int a, b;

  for (a = 0; s[a] != '\0'; a++)
    {
    }
  for (b = a - 1; b >= s[a]; b--)
    {
      _putchar(s[b]);
    }
  _putchar('\n');
}
