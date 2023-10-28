#include "main.h"

/**
 * clear_bit - This will set the value of a bit to 0.
 * at a given index.
 * @n: Unsigned long int pointer.
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
