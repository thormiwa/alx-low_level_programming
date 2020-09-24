#include "holberton.h"
/**
 * more_numbers - Entry Point. Prints numbers from 0 -14 ten times
 *
 * Return: Returns nothing since function is void
 */

void more_numbers(void)
{
  int a, b;

  for (b = 0; b <= 9; b++)
    {
      for (a= 0; a <= 14; a++)
	{
	  if (b > 9)
	    _putchar((b / 10) + '0');
	  _putchar(b % 10 + '0');
	}
      _putchar('\n');
    }
