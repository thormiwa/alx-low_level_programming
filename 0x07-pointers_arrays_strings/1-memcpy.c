#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area..
 * @n: bytes of the memory location.
 * @src: pointer to memory location.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
