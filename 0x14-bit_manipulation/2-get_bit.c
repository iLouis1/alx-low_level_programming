#include "main.h"

/**
 * get_bit - This will return the value of a bit at a given
 * index.
 * @n: The unsigned long int input.
 * @index: The index of the bit.
 *
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (0);

	if (index < 64)
		return ((n >> index) & 1);

	return (-1);
}
