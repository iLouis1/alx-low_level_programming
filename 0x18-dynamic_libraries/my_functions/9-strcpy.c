#include "main.h"

/**
 * *_strcpy -  This copies the string pointed to by src
 * @dest: The char type destn
 * @src: The char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 *
 * Return: Will return pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

return (dest);
}
