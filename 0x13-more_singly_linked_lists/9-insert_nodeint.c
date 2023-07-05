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
	listint_t *head2, *new_node, *tmp;
	unsigned int i;

	head2 = *head;
	tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	i = 0;
	while (head2 != NULL)
	{
		if (i == (idx - 1))
		{
			tmp->next = new_node;
		}
		if (i == idx)
		{
			new_node->next = head->next;
			return (new_node);
		}
		head2 = head2->next;
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
