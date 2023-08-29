#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: char to locate
 * Return: pointer to momery location
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);

}
