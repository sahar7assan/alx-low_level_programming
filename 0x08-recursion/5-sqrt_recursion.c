#include "main.h"
/**
 * _natural_sqrt- find the natural square root
 * @n: input int
 * @i: input int
 *
 * Return: int square root
 */
int _natural_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_natural_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function find square root of a number.
 * @n: int input
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_natural_sqrt(n, 0));
}
