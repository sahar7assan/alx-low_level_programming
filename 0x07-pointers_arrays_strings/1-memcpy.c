#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: source
 * @dest: destination
 * @n: n byte to be copy
 * Return: pointer to destenation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0 ; index < n ; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
