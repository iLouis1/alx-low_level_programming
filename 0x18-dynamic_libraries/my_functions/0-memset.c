#include "main.h"

/**
 * _memset - This will fill memory with constant values
 * @s: This points to char params
 * @b: constant byte
 * @n: The byte of memory area
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
