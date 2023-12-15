#include "main.h"

/**
 * _strncat - This concatenates two strings,
 * @dest: This is the destination.
 * @src: The source.
 * @n: This is the amount of bytes used from src.
 * Return: This is the pointer to destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
