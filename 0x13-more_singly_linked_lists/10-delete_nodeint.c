#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node.
 * @head: pointer to first node
 * @index: index delete
 * Return: 1 ok
 * fail -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old;
	listint_t *nxt;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	nxt = *head;
	old  = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(nxt);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (nxt == NULL)
			return (-1);
		old = nxt;
		nxt = nxt->next;
	}
	if (old)
		old->next = nxt->next;
	free(nxt);
	return (1);
}
