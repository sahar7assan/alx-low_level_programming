#include "lists.h"

/**
 * insert_nodeint_at_index - function add node at given position
 * @head: pointer to first node
 * @idx: node position
 * @n: input int
 *
 * Return: new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new;
	unsigned int count;

	node = *head;
	if (idx != 0)
	{
		for (count = 0; count < idx - 1 && node != NULL ; count++)
		{
			node = node->next;
		}
	}
	if (node == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = node->next;
		node->next = new;
	}
	return (new);

}
