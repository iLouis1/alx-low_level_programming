#include "main.h"
#include <stdio.h>

/**
  * main - Will print all the args content
  * @argc: the argument count
  * @argv: the argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
