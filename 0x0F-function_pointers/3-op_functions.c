#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function add tow integer
 * @a: an integer
 * @b: an integer
 *
 * Return:sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function return sub of tow integer
 * @a: an integer
 * @b: an integer
 *
 * Return:sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function return mul of tow integer
 * @a: an integer
 * @b: an integer
 *
 * Return:mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function return div of tow integer
 * @a: an integer
 * @b: an integer
 *
 * Return:div
 */
int op_div(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function return mod of tow integer
 * @a: an integer
 * @b: an integer
 *
 * Return:mod
 */
int op_mod(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
