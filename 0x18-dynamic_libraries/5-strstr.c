#include "main.h"
/**
 * _strstr - function that searches a string for any of a set of bytes
 * @haystack: input char
 * @needle: input char
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
			return (haystack);

		haystack++;
	}

	return (0);

}
