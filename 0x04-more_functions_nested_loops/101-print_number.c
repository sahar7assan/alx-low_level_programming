#include "main.h"
/**
 * print_number -function that prints an integer
 *
 * @n: input
 *
 * Return: int (Succsess)
 */
void print_number(int n)
{
	int number = n;

	if (number < 0)
	{
		_putchar('-');

		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + 48);
}
