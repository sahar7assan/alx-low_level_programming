#include "main.h"
/**
 * _strlen - function return length of string
 *@s: input char
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (count + _strlen_recursion(s + 1));
	}
	return (0);
}
