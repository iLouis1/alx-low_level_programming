#include "main.h"

/**
 * _isdigit -This will check if parameter is a number between 0 to 9.
 * @c: This is the input number.
 * Return: 1 if is a number (0 to 9), 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
