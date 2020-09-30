#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Prints elements of an array of integers
 * @a: number of elements of the array to be printed
 * @n: Elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
 		 if ( i==0)
		{
			printf("%d", a[i]);
		}
		else
		{	
			printf(", %d", a[i]);
		}
	}
	putchar('\n')
}
