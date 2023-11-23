#include "main.h"
/**
 * get_bit - function return value in index
 * @n: int number
 * @index: index of bit
 * Return: return value or  -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (sizeof(unsigned long int) * 8 < index)
	{
		return (-1);
	}
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
