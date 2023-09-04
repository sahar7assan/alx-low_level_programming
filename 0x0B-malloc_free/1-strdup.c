#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function duplicate string in new memory location
 * @str: string to be copied
 *
 * Return: pointer to memory location
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;
	int j = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1 ; str[i] != '\0' ; i++)
	{
		length++;
	}
	duplicate  = malloc(length * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		duplicate[j] = str[j];
		j++;
	}
	return (duplicate);
}
