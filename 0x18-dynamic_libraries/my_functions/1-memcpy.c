#include "main.h"

/**
  * _memcpy - This will copy memory area
  * @dest: This is the pointer to return
  * @src: This is the memory source area
  * @n: bytes from memory area to copy
  *
  * Return: This is the pointer to destination.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
