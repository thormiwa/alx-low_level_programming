#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - Entry Point. Prints numbers from 0 -14 ten times
 *
 * Return: returns nothing since function is void
 */
void more_numbers(void)
{
  int i;
  int b;

  for (b = 0; b < 10; b++)
    {
      i = 0;
      while (i <= 14)
	{
	  if (i >= 10)
	    {
	      _putchar(i / 10 + '0');
	    }
	  _putchar(i % 10 + '0');
	  i++;
	}
      _putchar('\n');
    }
}
