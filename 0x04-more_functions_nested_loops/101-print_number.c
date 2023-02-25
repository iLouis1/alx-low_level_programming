#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: ()
 */

void print_number(int n)

{
	unsigned int b = n;

	if (n < 0)
	{
		n *= -1;
		b = n;
		putchar(',');
	}
	b /= 10;
	if (b != 0)
		print_number(b);
	putchar((unsigned int) n % 10 + '0');
}

