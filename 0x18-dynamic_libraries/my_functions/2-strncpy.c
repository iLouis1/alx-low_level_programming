#include "main.h"

/**
 * _strncpy - This copies a string
 * @dest: This is the destination.
 * @src: This is the source.
 * @n: The amount of bytes from src.
 * Return: This is the pointer to destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
