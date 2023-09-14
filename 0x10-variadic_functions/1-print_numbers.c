#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers,
 * @n:number of parmeters
 * @separtor: string between numbers
 * Return: nothing 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (index = 0 ; index < n ; index++)
	{
		printf("%d",va_arg(ptr, unsigned int));
	}
	va_end(ptr);
	return (add);
}
