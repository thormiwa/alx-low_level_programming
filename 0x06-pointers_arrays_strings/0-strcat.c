#include "holberton.h"

/**
 *_strcat - A function that concatenates two strings
 *@dest: String to be concatenated to
 *@src: String to concatenate from
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
{
}
for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\0';
return (dest);
}
