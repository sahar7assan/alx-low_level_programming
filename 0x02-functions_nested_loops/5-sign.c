#include "main.h"

/**
 * print_sign - Print number sign
 *
 *@n: int number
 *
 * Return: 1 , -1 , 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
