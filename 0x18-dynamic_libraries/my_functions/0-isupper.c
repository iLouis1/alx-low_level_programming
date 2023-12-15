#include "main.h"
#include <stdio.h>

/**
 * _isupper - This will check if c is upper
 * @c: input for character
 *
 * Return: 0 if its not uppercase , 1 if it is uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
