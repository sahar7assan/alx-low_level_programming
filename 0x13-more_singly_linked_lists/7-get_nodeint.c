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
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
