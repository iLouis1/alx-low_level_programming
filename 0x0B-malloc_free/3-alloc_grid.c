#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ..
  * width: ...
  * @height: ...
  *
  * Return: ...
  */

int **alloc_grid(int width, int height)
{
	int a, b, k, l;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);

		if (x[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(x[b]);
			}

			free(x);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			x[k][l] = 0;
		}
	}

	return (x);
}
