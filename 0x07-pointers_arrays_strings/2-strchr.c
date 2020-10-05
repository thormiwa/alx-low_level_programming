#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer.
 * @c: character.
 * Return: NULL or Pointer to the first occurence of char
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	return (0);
}
