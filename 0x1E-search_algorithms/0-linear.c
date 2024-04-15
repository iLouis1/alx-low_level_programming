#include "search_algos.h"

/**
 * linear_search - This searches for value in an array of
 * integers using Linear search algorithm
 *
 * @array: THe input array
 * @size: The size of array
 * @value: The value to search in
 * Return: EXIT_SUCCESS Always
 */

int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
