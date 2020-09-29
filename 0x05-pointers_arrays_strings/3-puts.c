#include "holberton"  

/**
 *
 *
 *
 */

void_puts(char *str)
{
  int chars;

  for (chars = 0; str[chars] != '\0'; chars++)
  {
    _putchar(str[chars]);
  }
  _putchar('\n');
}
