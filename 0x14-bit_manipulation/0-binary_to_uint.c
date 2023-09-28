#include "main.h"
/**
 * binary_to_uint - convert binary
 * @b: pointer
 * Return: int value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int bb = 0;

	while (b && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bb = bb << 1;
		bb = bb | (*b - '0');
		b++;
	}
	return (bb);
}
