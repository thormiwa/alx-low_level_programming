#include "holberton.h"

/**
 * rev_string - Entry point. Reverses a string
 * @s: Pointer to a string to be reversed
 * Return: No return value. Function is void
 */

void rev_string(char *s)
{
  int j, b, temp;

  j = 0;

  while (s[j] != '\0')
    {
      j++;
    }
  j--;

  for (b = 0; j > b; b++, j--)
    {
      temp = s[j];
      s[j] = s[b];
      s[b] = temp;
    }

}
