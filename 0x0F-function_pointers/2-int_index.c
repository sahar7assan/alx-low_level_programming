#include "function_pointers.h"
/**
 * int_index - function search for an integer
 * @array: array to search number
 * @size: size of array
 * @cmp: pointer to function cmp
 *
 * Return: searched number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array && size > 0 && cmp)
	{
		x = 0;
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
