#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function compare tow string
 * @s1: char
 * @s2: char
 * Return: char (Sucsess)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int length1 = 0;
	int length2 = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		length1++;
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		length2++;
	}

	if (length1 == length2)
		return (0);
	else if (length1 > length2)
		return (1);
	else 
		return (-1);
}

