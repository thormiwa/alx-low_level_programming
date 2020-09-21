#include "holberton.h"
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standout input
 * return: (0)
 */
int main (void)
{
  char *a = "Holberton";
  int i = 0;
  for (i = 0; i <= 9; i++)
    {
      _putchar(a[i]);
    }
  putchar('\n');
  return (0);
}
