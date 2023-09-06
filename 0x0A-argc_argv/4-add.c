#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: string of input argument
 *
 * Return: add result.
 */
int main(int argc, char *argv[])
{
	int i, add = 0;
	int result = 0;
	char *is_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			is_letter = argv[i];
			while (*is_letter != 0)
			{
				if (*is_letter < 47 || *is_letter > 57)
				{
					printf("Error\n");
					return (1);
				}
				is_letter++;
			}
			result = atoi(argv[i]);
			add += result;
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
