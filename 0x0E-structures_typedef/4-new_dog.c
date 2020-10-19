#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: first parameter
 *
 * Description: uses malloc
 * Return: Always(0) Success
 */
char *_strdup(char *str)
{
	char *space;
	char *new_string;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	space = (char *) malloc(sizeof(char) * len + 1);

	if (space == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);


	new_string = space;

	while (*str)
	{
		*new_string = *str;
		new_string++;
		str++;
	}
	*new_string = '\0';

	return (space);
}

/**
 * new_dog - function that initialize a variable of type struct dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 *
 * Description: function that initialize a variable of type struct dog
 * Return: Always(0) Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *nameCopy;
	char *ownerCopy;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		return (NULL);
	}

	nameCopy = _strdup(name);
	ownerCopy = _strdup(owner);

	if (nameCopy == NULL || ownerCopy == NULL)
	{
		return (NULL);
	}

	(*newdog).name = nameCopy;
	(*newdog).age = age;
	(*newdog).owner = ownerCopy;

	if (newdog == NULL)
		return (NULL);

	return (newdog);
}
