#include "lists.h"

/**
* free_dlistint - frees d_llist
* @head: Input, head of d_llist
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
		return;

	current_node = head->next;
	while (current_node != NULL)
	{
		free(head);
		head = current_node;
		current_node = current_node->next;
	}
	free(head);
}
