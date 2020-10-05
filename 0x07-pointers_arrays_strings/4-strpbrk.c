#include "holberton.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: pointer to a string.
 * @accept: character.
 * Return: Returns a pointer that matches one of the bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
		if (s[a] == accept[b])
		{
			return (s + a);
		}
	}
	return ('\0');
}
