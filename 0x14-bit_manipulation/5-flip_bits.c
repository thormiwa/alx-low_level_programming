#include "holberton.h"

/**
* flip_bits - counts the number of bits to change
* to get ine number to another
* @n: number to start
* @m: numbers to go through
* Return: the number of flip
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		int a, bits;

			bits = 0;
				for (a = 0; a < 64; a++)
{
					if ((m >> a & 1) ^ (n >> a & 1))
					bits++;
}
					return (bits);
}
