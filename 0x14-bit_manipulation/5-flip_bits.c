#include "main.h"

/**
 * flip_bits - This will return the number of bits you
 * need to flip to get from one number to another
 * @n: number 1.
 * @m: number 2.
 *
 * Return: The number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}

