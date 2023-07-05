#include "lists.h"

/**
 * get_nodeint_at_index - gets node in:
 * @head: Input, start of lls at:
 * @index: Input, index
 *
 * Return: (node *) pointer of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
