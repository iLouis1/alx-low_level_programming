#include "main.h"
#include <stdio.h>

/**
  * print_line - draws a straight line
  * @n: the lenght of the line
  *
  * Return: void
  */

void print_line(int n)

{
	int a;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (a = 0; a <n; a++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
