#include "lists.h"

/**
 * get_nodeint_at_index - function get node in index
 * @head: pointer to first node
 * @index: node index
 *
 * Return: node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	while (head)
	{
		node = head;
		if (count == index)
		{
			return (node);
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
