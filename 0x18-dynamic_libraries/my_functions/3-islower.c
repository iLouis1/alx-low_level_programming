#include "main.h"

/**
 *_islower - This checks for a lowercase character
 *@c: The letter being tested
 *
 *Return: 0 Always
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
