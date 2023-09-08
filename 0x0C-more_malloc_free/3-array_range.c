#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @min: input min value
 * @max: input max value
 * @n: number of by
 *
 * Return: pointer to orderd array
 */
int *array_range(int min, int max)
{
	int *arRang;
	int length, i;

	if (min > max)
		return (NULL);
	length = ((max - min) + 1);
	arRang = malloc(length * sizeof(int));

	if (arRang == NULL)
		return (NULL);

	for (i = 0 ; min < max ; i++)
	{
		arRang[i] = min;
	}
	return (arRang);
}
