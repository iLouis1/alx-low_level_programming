#include <stdlib.h>
#include <stdio.h>
/**
  * create_array - This function creates an array of chars, and initializes
  * @c: character to fill in the array
  * @size: Size of array
  * Return: always 0
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	if (size == 0)
		return (NULL);
	else
		return (s);
free(s);
return (s);
}
