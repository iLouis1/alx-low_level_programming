#include "main.h"

/**
 * set_bit - This will set the value of a bit to 1.
 * at a given index.
 * @n: The pointer of an unsigned long int.
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);

*n |= (1UL << index);

	return (1);
}
