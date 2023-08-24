#include "main.h"
/**
 * _strcat - function contanate tow string
 * @src: input
 * @dest: input
 * Return: char (Sucsess)
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int j;
	int k;

	while (dest[index] != '\0')
	{
		index++;
	}
	for (j = 0 ; src[j] != '0' ; j++)
	{
	}
	for (k = 0 ; k <= j ; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}

