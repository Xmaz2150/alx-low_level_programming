#include "lists.h"

/**
 * listint_len - return no elements in lls:
 * @h: Input, start of lls
 *
 * Return: (size_t) no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
