#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - This prints the multiplication of two argument numbers
  * @argc: argument count
  * @argv: the argument vector
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int number1 = 0, number2 = 0;

	if (argc == 3)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		printf("%d\n", number1 * number2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
