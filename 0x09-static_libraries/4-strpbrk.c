#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: input char
 * Return: pointer to first occur
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (*s == accept[j])
			{
				return (s + i);
			}
		}
		s++;
	}
	return (NULL);

}
