#include "lists.h"
/**
 * add_node - function add new node
 * @str: string to add
 * @head: pointer to first node
 * Return: elements of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (str == NULL)
	{
		node->str = 0;
		node->len = 0;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
		return (node);
	}
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
