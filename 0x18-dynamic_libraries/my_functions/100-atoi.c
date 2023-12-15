#include "main.h"

/**
* _atoi - This changes a string to an int
* @s: This is the string to be changed
*
* Return: The int that is converted
*/

int _atoi(char *s)
{
	int k = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		k *= -1;

		else if (*s >= '0' && *s <= '9')
		num = num * 10 + (*s - '0');

		else if (num > 0)
		break;
	} while (*s++);

	return (num * k);
}
