#include "lists.h"

/**
 * print_list - print list element
 * @h: list
 * Return: list elements
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
