#include "lists.h"

/**
 * list_len - returns len of lls that starts at:
 *
 * @h: Input, head
 *
 * Return: ui
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
