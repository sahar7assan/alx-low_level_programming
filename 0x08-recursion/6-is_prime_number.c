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
	return (_prime(n, i - 1));
}
/**
 * _is_prime_number - prime number
 * @n: input int
 * Return: int factorial
 */
int _is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
