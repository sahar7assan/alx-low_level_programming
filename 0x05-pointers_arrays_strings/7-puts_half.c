#include "main.h"
/**
 * puts_half -  prints a half string
 * @str: input value
 * Return: void (Succsess)
 */
void puts_half(char *str)
{

	int i = 0;
	int h;

	while (str[i] != '\0')
	{
		i++;
	}
	h = i / 2;

	if (i % 2  == 1)
		h++;

	for (; h < i ; h++)
	{
		_putchar(str[h]);
	}

	_putchar('\n');
}
