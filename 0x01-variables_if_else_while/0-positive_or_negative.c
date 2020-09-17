#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - beginning point for random number checker
 *
 * Return: 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n < 0)
    {
      printf("%d is negative\n", n);
    }
  else if (n > 0)
    {
      printf("%d is postive\n", n)
	}
  else
    {
      printf("0 is zero\n")
	}
  return (0);
}
