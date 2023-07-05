#include "lists.h"

/**
 * free_listint2 - frees lls at
 * @head: Input, add of where lls starts
 *
 * Return: (void) none
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *head1;

	head1 = *head;
	while (head1 != NULL)
	{
		tmp = head1;
		head1 = head1->next;

		if (tmp != NULL)
			free(tmp);
	}
	*head = NULL;
}
