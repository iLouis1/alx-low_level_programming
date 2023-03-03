#include "main.h"
#include <stdio.h>

/**
* print_number - prints an integer
* @n:integer to be printed
* Return: void
*/

void print_number(int n)

{
	unsigned int num;

	if (n < 0)
	{
		putchar ('-');
		num = n * -1;
	}
	else
		num = n;
	if (num <= 9)
	{
		putchar (num + '0');
	return;
	}
	print_number(num / 10);
	print_number(num % 10);
}
