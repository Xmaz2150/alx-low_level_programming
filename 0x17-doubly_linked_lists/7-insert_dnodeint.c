#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	if (*h == NULL)
		return (add_dnodeint(h, n));
	else if (idx >= dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		current_node = *h;
		i = 0;
		while (i != (idx - 1))
		{
			current_node = current_node->next;
			i++;
		}

		/* forward */
		new_node->next = current_node->next;
		current_node->next = new_node;

		/* backwards */

		/* */
		rev_print(*h);
		return (new_node);
	}
}

/**
* dlistint_len - returns # of nodes in d_llist
* @h: Input, head of d_llist
*
* Return: # of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

