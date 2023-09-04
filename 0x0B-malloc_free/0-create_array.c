#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars
 * @size: int size of array
 * @c: char to be stored
 *
 * Return: pointer to memory location
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
