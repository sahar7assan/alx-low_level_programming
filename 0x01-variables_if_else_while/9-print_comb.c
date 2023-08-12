#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar('0' + (p % 10));
		if (p == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
