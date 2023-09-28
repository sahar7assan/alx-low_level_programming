#include "main.h"
/**
 * flip_bits - function flip bits
 * @n: int number
 * @m: int number
 * Return: int value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
		{
			i++;
		}
		xor >>= 1;
	}

	return (i);
}
