#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - This will initialize a dog structure
  * @d: Presents a dog structure.
  * @name: Here is the name of the dog.
  * @age: Represents age of the dog.
  * @owner: The owner of the dog.
  *
  * Return: 0
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
