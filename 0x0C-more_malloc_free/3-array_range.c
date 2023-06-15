#include "main.h"
#include <stdlib.h>

/**
  * array_range - ...
  * @min: ...
  * @max: ...
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *i, x = 0;

	if (min > max)
		return (NULL);

	i = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (i == NULL)
		return (NULL);

	while (min <= max)
	{
		i[x] = min;
		x++;
		min++;
	}

	return (i);
}
