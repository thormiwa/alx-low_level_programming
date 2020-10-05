#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Sum of two diagonals of a square matrix of integers
 * @a: 2d Array of a matrix
 *@size: size of a matrix
*Return: No return Value. Function is void
 */

void print_diagsums(int* a, int size)
{
    int x, sum1 = 0, sum2 = 0;

    for (x = 0; x < size; x++)
    {
        sum1 += a[x];
        a += size;
    }

    a -= size;

    for (x = 0; x < size; x++)
    {
        sum2 += a[x];
        a -= size;
    }
    printf("%d, %d", sum1, sum2);
}
