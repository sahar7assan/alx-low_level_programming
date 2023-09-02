#include <stdio.h>
#include "main.h"
/**
 * main - Program print all arguments
 * @argc: argument count
 * @argv: string of input argument
 *
 * Return: all arguments it recive
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

