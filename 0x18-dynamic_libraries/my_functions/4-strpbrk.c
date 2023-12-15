#include "main.h"

/**
 * _strpbrk - This is the entry point
 * @s: The input
 * @accept: The input
 *
 * Return: 0 Always
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			return (s);
		}
		s++;
		}

	return ('\0');
}
