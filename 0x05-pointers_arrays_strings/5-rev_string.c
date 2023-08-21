#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: input value
 * Return: void (Succsess)
 */
void rev_string(char *s)
{
	int a, len;
	char *begin, *end = s;

	a = 0;

	while (s[a] != '\0' && s[a + 1] != '\0')
	{
		end++;

		a++;
	}
	len = a + 1;
	begin = s;

	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
