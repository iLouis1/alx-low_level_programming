#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - The new dog
  * @name: This is the name of the dog
  * @age: Age of the dog
  * @owner: Dog's owner
  *
  * Return: 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * own_l);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}

/**
  * _strlen - This will return the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int b = 0;

	for (; *s != '\0'; s++)
	{
		b++;
	}

	return (b);
}

/**
  * _strcpy - This will copy a string
  * @dest: Value of destination
  * @src: Value of the source
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';

	return (dest);
}
