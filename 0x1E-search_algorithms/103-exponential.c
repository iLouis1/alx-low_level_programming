#include "search_algos.h"

/**
  * _binary_search - This searches for a value in
  * a sorted array of integers using binary search.
  * @array: The pointer to first element of the array to search.
  * @left: Starting index of the [sub]array to search.
  * @right: Ending index of the [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  * Otherwise, the index where the value is located.
  *
  * Description: Prints [sub]array being searched after each change.
  */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}

	return (-1);
}

/**
  * exponential_search - This searches for value in a sorted
  * array of integers using exponential search.
  * @array: The pointer to first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t m = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (m = 1; m < size && array[m] <= value; m = m * 2)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	}

	right = m < size ? m : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, right);
	return (_binary_search(array, m / 2, right, value));
}
