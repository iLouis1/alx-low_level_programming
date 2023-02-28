#include "main.h"

/**
 * _puts - Prints a strong
 * @str: The string to print
 * Return: void
 */

void _putchar(char *str)

{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
