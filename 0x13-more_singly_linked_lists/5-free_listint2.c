#include "lists.h"

/**
 * free_listint2 - frees lls at
 * @head: Input, add of where lls starts
 *
 * Return: (void) none
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *head2;

	head2 = *head;

	while (head2 != NULL)
	{
		tmp = head2;
		head2 = head2->next;

		free(tmp);
	}
}
