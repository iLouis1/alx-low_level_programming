#include "main.h"

/**
 * get_endianness - This will check the endianness
 *
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
