#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: pointer to a substring.
 * @accept: Character to be accepted.
 * Return: Number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, len = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				len++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			break;
		}
	}
	return (len);
}
