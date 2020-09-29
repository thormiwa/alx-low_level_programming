#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
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
