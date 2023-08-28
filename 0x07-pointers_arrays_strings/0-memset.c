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
	int i;
	unsigned int length;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	for (j = 0 ; length < n ; j++)
	{
		s[i] = b;
	}
	return (s);
}
