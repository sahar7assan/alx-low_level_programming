#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: int input
 * @n: int input
 *
 * Return: pointer to momery location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0 ; index < n ; index++)
	{
		s[index] = b;
	}
	return (s);
}
