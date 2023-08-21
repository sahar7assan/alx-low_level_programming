#include "main.h"
/**
 * print_array - print elements of array
 * @a: input value
 * @n: input value
 * Return: void (Succsess)
 */
void print_array(int *a, int n)
{

	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}

	putchar('\n');
}
