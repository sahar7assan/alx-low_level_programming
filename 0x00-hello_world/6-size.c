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

	printf("Size of a char:%zu byte(s)\n", sizeof(b));
	printf("Size of a int:%zu byte(s)\n", sizeof(a));
	printf("Size of a long:%zu byte(s)\n", sizeof(g));
	printf("Size of a long long int:%zu byte(s)\n", sizeof(gg));
	printf("Size of a float:%zu byte(s)\n", sizeof(f));

	return (0);
}
