#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: old memory block
 * @old_size: old strng size
 * @new_size: new string size
 * Return: new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *temp;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	temp = ptr;
	if (new == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new[i] = temp[i];
		}
	}
	free(ptr);
	return (new);
}
