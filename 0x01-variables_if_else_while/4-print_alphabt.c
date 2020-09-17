#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all lower case alphabets
 *
 * Description: q and e are excluded from the alphabets
 * Return: Always(0) Success
 */
int main(void)
{
  char alphabet;

  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
      if (alphabet == 'e' || alphabet == 'q')
	continue;
      else
	putchar(alphabet);
    }
  putchar('\n');
  return (0);
}
