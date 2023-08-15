#include "main.h"
/**
 * print_last_digit - Print last digit
 *
 * @n: is an integer
 *
 * Return: Always  (Success)
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
