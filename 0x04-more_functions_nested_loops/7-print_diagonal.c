#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal
 * @n: input int
 *
 * Return: void (Success)
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(92);
	}
	_putchar('\n');
}
