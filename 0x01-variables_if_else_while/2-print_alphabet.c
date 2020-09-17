#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all aphabets in lowercase
 *
 * Description: Alphabets are sorted
 * Return: Always(0) Success
 */
int main(void)
{
  char alphabet;

  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
      putchar(alphabet);
    }
  putchar('\n');
  return (0);
}
