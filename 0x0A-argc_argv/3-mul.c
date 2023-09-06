#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program multiplies two numbers
 * @argc: argument count
 * @argv: string of input argument
 *
 * Return: multiplie result
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = arg1 * arg2;
	printf("%d\n", mul);
	return (0);
}
