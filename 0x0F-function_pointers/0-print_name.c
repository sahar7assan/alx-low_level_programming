#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that print name
 * @name: input name
 * @f: pointer to function f
 *
 * Return: nothing print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}

