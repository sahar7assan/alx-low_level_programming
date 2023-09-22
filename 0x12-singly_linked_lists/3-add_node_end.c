#include "lists.h"

/**
 * add_node_end - function add node at the end
 * @str: srting
 * @head: pointer to first node
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *endnode;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = node;
	}

	if (str == NULL)
	{
		node->str = 0;
		node->len = 0;
	}
	else
	{
		node->str = strdup(str);
		if (node->str == 0)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(str);
	}
	node->next = NULL;
	return (node);
}

/**
 * _strlen - a function that returns the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
