#include "main.h"

/**
 * _strcat - This appends src to the dest string
 * @dest: The string to append by src
 * @src: The string to append to dest
 *
 * Return: This is the dest address
 */

char *_strcat(char *dest, char *src)
{
	int k, j;

	k = j = 0;
	while (*(dest + k))
		k++;
	while ((*(dest + k) = *(src + j)))
	{
		k++;
		j++;
	}
	return (dest);
}
