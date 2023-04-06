#include "lists.h"

/**
 * get_nodeint_at_index - returns pointer to node at index:
 *
 * @index: Input, in lls starting at:
 * @head: Input, head
 *
 * Return: *listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	i = 0;
	while (head != NULL)
	{

		head = head->next;
		i++;
		if (i == index)
			return (head);

	}
	return (NULL);

}
