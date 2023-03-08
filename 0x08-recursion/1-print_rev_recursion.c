#include <stdio.h>
#include "main.h"

/**
  * _print_rev_recursion -  This function prints a string in reverse
  * @s: string
  * Return: void
  */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
