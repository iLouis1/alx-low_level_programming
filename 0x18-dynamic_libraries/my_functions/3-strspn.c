#include "main.h"

/**
 * _strspn - The will get the length of a prefix substring.
 * @s: This is the initial segment.
 * @accept: The bytes accepted.
 *
 * Return: This is the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, m, k;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		k = 1;
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + a) == *(accept + m))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (a);
}
