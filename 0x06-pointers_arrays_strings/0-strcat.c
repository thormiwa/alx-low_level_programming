#include "holberton.h"

/**
 *_strcat - A function that concatenates two strings
 *@dest: String to be concatenated to
 *@src: String to concatenate from
 *Return: Returns concatenated string.
 *
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int z;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}

	z = 0;
	for (; src[z] != '\0'; z++, len++)
	{
		dest[len] = src[z];
	}

	dest[len] = '\0';

	return (dest);
}
