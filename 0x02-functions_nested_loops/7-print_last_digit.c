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

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);

	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
