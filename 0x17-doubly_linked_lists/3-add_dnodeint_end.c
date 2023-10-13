#include "lists.h"

/**
* add_dnodeint_end - adds new node at end of d_llist
* @head: Input, head of d_llist
* @n: Input, data for new node
*
* Return: addressof new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	return (new_node);
}
