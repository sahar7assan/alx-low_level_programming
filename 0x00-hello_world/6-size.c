#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	long g;
	long long int gg;
	float f;

	printf("Size of a char:%lubyte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a int:%lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a long:%lu byte(s)\n", (unsigned long) sizeof(g));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long) sizeof(gg));
	printf("Size of a float:%lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
