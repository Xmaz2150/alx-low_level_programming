#include "lists.h"

/**
 * add_node_end - adds node at end of lls that starts at:
 *
 * @head: Input, head
 * @str: Input, string to be added
 *
 * Return: ui
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return (new_node);
}

