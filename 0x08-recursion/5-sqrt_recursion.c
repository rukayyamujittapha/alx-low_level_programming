#include "main.h"

int_sqrt(int, int);

/**
 * _sqrt_recursion -> sqrt using recursion
 * @n: parameter to be sqrt
 * Return: square root of a number
 */
int_sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive square root
 * @n: number
 * @i: iterator
 */
int_sqrt(int n, int i)
{
	int squaer = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
