#include <stdio.h>
#include "main.h"
/**
 * main - Program print number of arguments
 * @argc: argument count
 * @argv: string of input argument
 *
 * Return: name of program
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}

