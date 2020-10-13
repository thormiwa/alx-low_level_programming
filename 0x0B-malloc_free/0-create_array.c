#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Entry point. Creates an array of chars
 * @size: Size of the array
 * @c: Argumenet charaacters
 * Return: Pointer to the array, Null upon fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	b = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	a = 0;
	while (a < size)
	{
		b[a] = c;
		++b;
	}
	return (b);
}
