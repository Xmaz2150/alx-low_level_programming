#include <stddef.h>
#include  "lists.h"
#include <stdio.h>

/**
 * listint_len- returns no of all elements in lls starting at:
 * @h: Input, head
 * Return: ui
 */

size_t listint_len(const listint_t *h)
{
        size_t node_no;

        node_no = 0;
        while (h != NULL)
        {
                node_no++;
                h = h->next;
        }
        return (node_no);
}

