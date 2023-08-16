#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: table (Succsess)
 */
void times_table(void)
{
	int n;
	int b;
	int x;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(48);

		for (b = 1 ; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			x = n * b;
			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
