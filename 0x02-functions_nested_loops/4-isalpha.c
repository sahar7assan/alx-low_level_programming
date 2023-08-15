#include "main.h"
/**
 * _isalpha - Check alphabets
 *
 * @c: charcter
 *
 * Return: Always 1 (If is alphabet)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

