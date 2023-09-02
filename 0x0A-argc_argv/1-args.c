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
	
	/*int count;*/

	if (argv [0] != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

