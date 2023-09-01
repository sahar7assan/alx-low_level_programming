#include "main.h"
/**
 * _abs - Abs integer
 *
 * @n: is an integer
 *
 * Return: integer (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}
