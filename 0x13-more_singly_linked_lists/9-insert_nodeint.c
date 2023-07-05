#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node anywhere in lls:
 * @head: Input, add of start of lls, at:
 * @idx: Input, index for new node, index
 *
 * Return: (node *) pointer of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	i = 0;
	while (tmp != NULL)
	{
		if (i == (idx - 1))
		{
			new_node->next = tmp;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
