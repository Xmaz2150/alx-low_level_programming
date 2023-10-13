#include "lists.h"

/**
* add_dnodeint - adds new node at start of d_llist
* @head: Input, the head of d_llist
* @n: Input, data for new node
*
* Return: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
