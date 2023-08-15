#include "main.h"
/**
* print_alphabet_x10 - Print alphabet 10 times
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char lower;
	int times;

	for (times = 0; times < 10 ; times++)
	{
		for (lower = 'a' ; lower <= 'z' ; lower++)
	{
			_putchar(lower);
		}
		 _putchar('\n');
	}
}
