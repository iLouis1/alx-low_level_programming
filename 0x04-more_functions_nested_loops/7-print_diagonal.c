#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - draws a diagonal line
  * @n: the number of lines
  *
  * Return: void
  */

void print_diagonal(int n)

{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			j = i;
			while (j)
			{
				putchar(' ');
				j--;
			}
			putchar('\\');
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
