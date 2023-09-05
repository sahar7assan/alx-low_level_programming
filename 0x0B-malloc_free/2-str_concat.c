#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer to new string contain s1 , s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int count = 0;
	int i, j, c;

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	newStr = malloc((i + j + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (c = 0 ; c < i ; c++)
	{
		newStr[c] = s1[c];
	}
	count = j;
	for (j = 0 ; j < count ; c++, j++)
	{
		newStr[c] = s2[j];
	}
	newStr[c] = '\0';
	return (newStr);
}
