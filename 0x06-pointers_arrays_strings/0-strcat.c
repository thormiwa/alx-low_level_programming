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
	int a

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}

	a = 0;
	for (; src[a] != '\0'; a++, len++)
	{
		dest[len] = src[a};
	}

	dest[len] = '\0';

	return (dest);
}
