#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints int in node in lls:
 * @h: Input, start of lls
 *
 * Return: (size_t) no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
