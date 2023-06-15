#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[k])
		k++;

	if (n >= k)
		l = a + k;
	else
		l = a + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (b < l)
	{
		if (b <= a)
			str[b] = s1[b];

		if (b >= a)
		{
			str[b] = s2[k];
			k++;
		}
		b++;
	}
	str[b] = '\0';
	return (str);
}
