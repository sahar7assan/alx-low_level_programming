#include "main.h"
/**
 *  _strspn - function gets the length of a prefix substring
 * @s: pointer to string
 * @accept: char
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int sublen = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				sublen++;
			j++;
		}
		i++;
		j = 0;
	}
	return (sublen);
}
