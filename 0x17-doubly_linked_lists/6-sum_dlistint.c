#include "lists.h"

/**
* sum_dlistint - returns the sum of all data in d_llist
* @head: Input, head of d_llist
*
* Return: sum of all #s in d_llist
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
