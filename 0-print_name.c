#include "function_pointers.h"

/**
  * print_name - This prints a name
  * @name: The name to be printed
  * @f: Points to function
  *
  * Return: 0
  */
void print_name(char *name, void (*y)(char *))
{
	if (name != NULL && y != NULL)
		y(name);
}
