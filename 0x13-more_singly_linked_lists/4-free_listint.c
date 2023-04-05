#include "lists.h"

/**
 * free_listint - frees all nodes in a lls that start at:
 *
 * @head: Input, head
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
