#include "holberton.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: First pointer
 * @b: Second pointer
 * Return: No return value, function is void
 */

void swap_int(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
