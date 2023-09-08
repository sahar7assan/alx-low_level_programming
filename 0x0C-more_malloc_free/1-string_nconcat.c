#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: number of bytes
 *
 * Return: pointer to new string contain s1 , s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j, c, strlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strlen = n + i;
	newStr = malloc((i + n + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (c = 0 ; c < strlen ; c++)
	{
		if (c < i)
		{
			newStr[c] = s1[c];
		}
		else
		{
			newStr[c] = s2[c - i];
		}
	}
	newStr[c] = '\0';
	return (newStr);
}
