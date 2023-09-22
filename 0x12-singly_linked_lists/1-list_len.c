#include "lists.h"

/**
 * list_len - function print length of list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
