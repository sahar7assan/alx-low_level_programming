#include "main.h"
/**
 * set_bit - function sets value of bit to 1
 * @n: int number
 * @index: bit index
 * Return: 1 if succsess -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i <<= index;
	*n = *n | i;

	return (1);
}
