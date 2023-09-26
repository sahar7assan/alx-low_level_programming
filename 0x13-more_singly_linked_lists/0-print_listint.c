#include "lists.h"

/**
 * print_listint - function print list elments
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
