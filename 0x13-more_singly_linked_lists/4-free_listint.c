#include "lists.h"

/**
 * free_listint - frees lls at:
 * @head: Input, start of lls
 *
 * Return: (void) none
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
