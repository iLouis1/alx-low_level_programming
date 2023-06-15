#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - This will allocate memory
  * @x: This is the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int x)
{
	void *p;

	p = malloc(x);

	if (p == NULL)
		exit(98);

	return (p);
}
