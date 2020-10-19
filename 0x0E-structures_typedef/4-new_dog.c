#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
   * _strdup - returns a pointer to space in memory containing copy of string.
    * @s: pointer to the string.
     * Return: Pointer to a string stored in memory.
      */
char *_strdup(char *s)
{
	char *dup;
	unsigned int a = 0;
	unsigned int b = 0;

		if (s == NULL)
		return (NULL);
		/*the length of the string.*/
		while (s[a] != '\0')
		a += 1;
		a++;

		dup = malloc(a * sizeof(*dup));
		if (dup == NULL)
		return (NULL);
while (b < a)
{
dup[b] = s[b];
	b++;
}
return (dup);
}


/**
*new_dog - create an instance of struct dog.
*@name:firt argument.
*@age:second argument.
*@owner: Third argument.
*Return: instance of struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

		newdog = malloc(sizeof(struct dog));

		if (newdog == NULL)
{
		return (NULL);
}
		if (newdog == NULL)
		return (NULL);
/*Assign name element of new struct*/
	(*newdog).name = _strdup(name);
		if ((*newdog).name == NULL)
{
		return (NULL);
}
/*Assgin owner element of new struct*/
	(*newdog).owner = _strdup(owner);
		if ((*newdog).owner == NULL)
{
		return (NULL);
}
	(*newdog).age = age;

	return (newdog);
}
