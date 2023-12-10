#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts new node at any given index
 * @h: Input, address of list
 * @idx: Input, positon in list to insert new node
 * @n: Input, new node data
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node, *tmp;
	unsigned int i;

	(void)tmp;
	/*
	*/
	if (*h == NULL)
		return (add_dnodeint(h, n));
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx >= dlistint_len(*h))
		return (add_dnodeint_end(h, n));

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
	/* backwards */
	new_node->prev = current_node;

	current_node->next = new_node;

	return (new_node);
}

/**
* dlistint_len - returns # of nodes in d_llist
* @h: Input, head of d_llist
*
* Return: # of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

