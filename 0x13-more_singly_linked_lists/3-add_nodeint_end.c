#include "lists.h"

/**
 * add_nodeint_end - function add new node at the end.
 * @head: pointer to first node.
 * @n: int data.
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		endnode = *head;

		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		endnode->next = node;
	}
	return (node);
}
