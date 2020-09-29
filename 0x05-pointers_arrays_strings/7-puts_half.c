#include "holberton.h"


/**
 * puts_half - Prints half of a string
 * @str: pointer to a string to be printed
 * Return: No return Value
 */

void puts_half(char *str)
{
  int m, n;

  m = 0;

  while (str[m] != '\0')
    {
      m++;
    }
  n = (m + 1) / 2;

  for (m = n; str[m]; m++)
    {
      _putchar(str[m]);
    }
  _putchar('\n');
}
