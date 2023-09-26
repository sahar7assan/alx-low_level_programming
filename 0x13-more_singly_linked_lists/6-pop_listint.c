#include "lists.h"

/**
 * pop_listint - function that delete the head node
 * @head: pointer to first node
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int count;

	if (head == NULL || *head == NULL)
		return (0);

	node = *head;
	count = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (count);
}
