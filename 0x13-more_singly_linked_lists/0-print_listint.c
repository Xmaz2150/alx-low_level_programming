#include  "lists.h"

/**
 * print_listint- prints all elements in lls starting at:
 * @h: Input, head
 * Return: no of nodes in lls
 */

size_t print_listint(const listint_t *h)
{
	size_t node_no;
	
	node_no = 0;
	while (h != NULL)
	{
		if (sizeof(h->next) != 4)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("(nil)\n");
		}
		node_no++;
		h = h->next;
	}
	return (node_no);
}
