#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers,
 * @n:number of parmeters
 * @separator: string between numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;

	va_start(ptr, n);

	for (index = 0 ; index < n ; index++)
	{
		printf("%d", va_arg(ptr, unsigned int));

		if (separator != NULL && index < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
