#include "main.h"
/**
 * _strncpy - function copy string
 * @src: input destination
 * @dest: input source
 * @n: input
 * Return: char (Sucsess)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

