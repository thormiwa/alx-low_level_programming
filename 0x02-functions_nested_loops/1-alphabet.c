#include "holberton.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * Description: They are sorted by default
 *
 */

void print_alphabet(void)
{
  char alphabet;

  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
      _putchar(alphabet);
    }
  _putchar('\n');
}
