#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ...
  * @d: Dog
  *
  * Return: 0
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
