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
	long prime;

	while (div < (pr / 2))
	{
		if ((pr % 2) == 0)
		{
			prime = pr / 2;
			continue;

		}

		for (div = 3 ; div < (pr / 2) ; div += 2)
		{
			if ((pr % div) == 0)
			prime = pr / div;
		}
	}

	printf("%ld\n", prime);
	return (0);
}
