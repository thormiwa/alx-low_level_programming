#include "holberton"  

/**
 * _puts - Entry point. Prints a string with a new line
 * @str: Pointer to the string to be printed and a new line
 * Return: No return value. Function is void
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
