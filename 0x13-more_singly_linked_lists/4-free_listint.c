#include "lists.h"

/**
 * free_listint - function free list.
 * @head: pointer to first node
 *
 * Return: void
 */

void free_listint(const listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
