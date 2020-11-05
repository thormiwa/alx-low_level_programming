#include "holberton.h"

/**
* set_bit - sets the value of a bit at a given index
* @n: number pointer
* @index: index
* Return: i if it worked or -1 if error occurs
**/

int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned int num;

			if (index > (sizeof(unsigned long) * 8))
					return (-1);
				num = 1 << index;
				*n = *n | num;
				return (1);
}
