#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb:input n elements
 * @size: input array size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *memory;
	unsigned int i;
	unsigned int memlen;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memlen = size * nmemb;
	memory = malloc((nmemb * size) * sizeof(int));

	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < memlen ; i++)
	{
		memory[i] = 0;
	}
	return (memory);
}

