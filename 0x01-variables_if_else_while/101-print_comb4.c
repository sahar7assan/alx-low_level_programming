#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				putchar('0' + (i % 10));
				putchar('0' + (j % 10));
				putchar('0' + (k % 10));
				if (i == 7 &&  j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
