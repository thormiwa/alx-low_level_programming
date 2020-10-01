#include "holberton.h"
/**
 * _strcat - appends strings together
 * @dest: first parameter
 * @source: second parameter
 *
 * Return: Always(0) Success
 */
char *_strcat(char *dest, char *source)
{
	char *add = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}

	*dest = '\0';
	return (add);
}
