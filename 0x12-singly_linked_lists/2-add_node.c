#include "lists.h"

/**
 * add_node - adds node at start of lls that starts at:
 *
 * @head: Input, head
 * @str: Input, string to be added
 *
 * Return: ui
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
