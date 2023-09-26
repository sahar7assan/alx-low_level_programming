#include "lists.h"

/**
 * free_listint2 - function free list.
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		node = *head;
		*head = *head->next;
		free(node);
	}
}
