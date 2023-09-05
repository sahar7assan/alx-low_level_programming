#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: count arg.
 * @av: value of argument.
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *argCat;
	int c;
	int i;
	int j;
	int ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	argCat = malloc((c + 1) * sizeof(char));
	if (argCat == NULL)
	{
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			argCat[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			argCat[ia] = av[i][j];
	}
	argCat[ia] = '\0';
	return (argCat);
}
