#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - This is the dog attributes
  * @name: This is the name of the dog.
  * @age: This is the age of the dog.
  * @owner: This is the owner of the dog.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
