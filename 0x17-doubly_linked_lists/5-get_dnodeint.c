#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node of a d_llist
* @head: Input, head of d_llist
* @index: Input, index to check
*
* Return: address of nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		nodes++;
		if ((nodes - 1) == index)
			return (current_node);
		current_node = current_node->next;
	}
	return (NULL);
}
