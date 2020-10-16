#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newMem;
	int i, min = new_size < old_size ? new_size : old_size;

	if (ptr == NULL)
	{
		newMem = malloc(new_size);
		if (newMem == NULL)
		{
			return (NULL);
		}
		return (newMem);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	newMem = malloc(new_size);
	if (newMem == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < min; i++)
	{
		newMem[i] = ((char *)ptr)[i];
	}
	if (new_size > old_size)
	{
		while (i < (int)new_size)
		{
			newMem[i] = 0;
			i++;
		}
	}


	free(ptr);
	return (newMem);
}
