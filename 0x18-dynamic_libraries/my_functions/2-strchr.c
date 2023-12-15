#include "main.h"

/**
  * _strchr - This will locate characters in string
  * @s: The source string
  * @c: The character to find
  *
  * Return: This is the string from character found
  */

char *_strchr(char *s, char c)
{
	int h = 0, b;

	while (s[h])
	{
		h++;
	}

	for (b = 0; b <= h; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
