#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: input value
 * @src: input value
 * Return: void (Succsess)
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (; src[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
