#include "main.h"
/**
 * _prime_number - prime number
 * @n: input int
 * @i: input int
 * Return: prime
 */
int _prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_number(n, i - 1));
}
/**
 * is_prime_number - prime number
 * @n: input int
 * Return: int factorial
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}
