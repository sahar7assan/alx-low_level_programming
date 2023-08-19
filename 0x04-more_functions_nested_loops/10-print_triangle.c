#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 *
 * @size: input int
 *
 * Return: void (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;

		for (i = 1 ; i <= size ; i++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			for (j = size - i ; j > 0 ; j--)
				_putchar(' ');

			for (j = 0 ; j < i ; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
		_putchar('\n');
}
