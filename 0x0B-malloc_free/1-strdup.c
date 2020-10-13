#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int _strlen(char *s)
{
unsigned int a;

for (a = 0; s[a] != '\0'; a++)
;
return (i + a);
}
/**
 * _strdup - duplicate string
 * @str: source string
 * Description: duplicate string
 * Return: pointer to string, NULL if fail
 **/
char *_strdup(char *str)
{
char *dest;
unsigned int a;

if (str == NULL)
return (NULL);

dest = (char *)malloc((_strlen(str)) * sizeof(char));

if (dest == NULL)
return (NULL);

for (a = 0; str[a] != '\0'; a++)
dest[a] = str[a];
dest[a] = str[a];

return (dest);
}
