#include "function_pointers.h"
/**
 * array_iterator - function execute a function
 * @array:input array
 * @size:size of array
 * @action: function pointer
 *
 * Return: nothing print array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0 ; count < size ; count++)
	{
		action(array[count]);
	}

}
