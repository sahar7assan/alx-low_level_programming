#include "lists.h"

/**
 * sum_listint - function return sum of all data
 * @head: pointer to first node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
