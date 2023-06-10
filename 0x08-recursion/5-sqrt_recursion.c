#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - This returns the natural square root of a number
  * @n: This number will calculate the natural square root
  *
  * Return: It returns the natural square root
  */
  
int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - This calculates natural square root
  * @n: This number will calculate the square root
  * @i: iterate number
  *
  * Return: It returns the natural square root
  */
  
int _sqrt(int n, int i)

{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
