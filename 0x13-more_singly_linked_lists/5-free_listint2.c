#include "lists.h"

/**
 * free_listint2 - frees all nodes in a lls that start at:
 *
 * @head: Input, head
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
        listint_t *tmp;
	listint_t *current;

	current = *head;

        while (current != NULL)
        {
		tmp = current->next;
                free(current);
		current = tmp;
        }
}

