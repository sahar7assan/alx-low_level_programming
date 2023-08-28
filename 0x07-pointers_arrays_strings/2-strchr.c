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
	/*char *ptr;*/

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
