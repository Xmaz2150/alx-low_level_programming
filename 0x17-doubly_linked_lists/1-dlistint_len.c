#include "lists.h"

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
