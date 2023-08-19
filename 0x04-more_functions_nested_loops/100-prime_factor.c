#include <stdio.h>
/**
 * main - program that finds and prints the largest prime factor of number
 *
 * Return: Always 0 (Succsess)
 */
int main(void)
{
	int div;
	long pr = 612852475143;

	while (div < (pr / 2))
	{
		if ((pr % 2) == 0)
		{
			pr /=  2;
			continue;

		}

		for (div = 3 ; div < (pr / 2) ; div += 2)
		{
			if ((pr % div) == 0)
			pr /= div;
		}
	}

	printf("%ld\n", pr);
	return (0);
}
