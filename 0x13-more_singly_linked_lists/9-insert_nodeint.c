#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new in lls starting at:
 *
 * @head: Input, at a particular index:
 * @idx: Input, with :
 * @n: Input, as data for the new node
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *tmp;
	listint_t *new_node;

	i = 0;
	tmp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
		if (i == (idx - 1))
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
	}
	return (tmp);
}
