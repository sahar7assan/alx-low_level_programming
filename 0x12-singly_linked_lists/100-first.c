#include "lists.h"

void start_up(void)__attribute__((constructor));

/**
 * start_up - funtio start befor main
 * @void: input
 * Return: print text
 */
void start_up(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
