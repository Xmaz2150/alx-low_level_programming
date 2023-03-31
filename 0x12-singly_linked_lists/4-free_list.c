#include "lists.h"

/**
 * free_list - frees all nodes in a lls that start at:
 *
 * @head: Input, head
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
