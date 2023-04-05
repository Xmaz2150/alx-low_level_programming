#include <stddef.h>
#include  "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end- adds node in lls at the end of:
 * @h: Input, head
 * Return: pointer to new head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node;
        listint_t *last = *head;

        new_node = malloc(sizeof(listint_t));

        if (new_node == NULL)
        {
                return (NULL);
        }

	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

        while (last->next != NULL)
        {
		last = last->next;
        }

	last->next = new_node;
        return (new_node);
}


