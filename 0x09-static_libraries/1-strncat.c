#include "main.h"
/**
 * _strncat - function contanate tow string
 * @src: input destination
 * @dest: input source
 * @n: input
 * Return: char (Sucsess)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
