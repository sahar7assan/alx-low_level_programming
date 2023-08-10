#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int in;
	long lo;
	long long int lg;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(lo));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(lg));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(fl));

	return (0);
}
