#include "lists.h"

/**
 * add_nodeint - function add new node.
 * @head: pointer to first node
 * @n: int data
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	else if (node == NULL)
		return (NULL);

	return (node);
}
