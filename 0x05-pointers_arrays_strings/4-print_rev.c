#include "main.h"
#include <stdio.h>
/**
 * print_rev -  prints a string, in reverse
 * @s: input value
 * Return: void (Succsess)
 */
void print_rev(char *s)
{

	int i, len;

	for (i = 0 ; s[i] != '\0'; i++)
		;
	len = i;

	for (i = len - 1 ; s[i] != '\0' ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
