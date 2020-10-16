#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newMem;
	int i, min = new_size < old_size ? new_size : old_size;


	if (ptr == NULL)
	{
		free(ptr);
		newMem = malloc(new_size);
		return (newMem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	newMem = malloc(new_size);
	if (newMem == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
	{
		newMem[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (newMem);
}
