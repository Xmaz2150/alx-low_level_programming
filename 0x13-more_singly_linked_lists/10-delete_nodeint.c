#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node in lls starting at:
 *
 * @head: Input, head, at a particular index:
 * @index: Input.
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *tmp;

	i = 0;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;

		if (i == (index))
		{
			tmp->next = (tmp->next)->next;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
