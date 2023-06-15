#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - ...
  * @ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (b = 0; b < old_size && b < new_size; b++)
	{
		nptr[b] = ((char *) ptr)[b];
	}

	free(ptr);
	return (nptr);
}
