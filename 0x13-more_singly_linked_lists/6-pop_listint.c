#include "lists.h"

/**
 * pop_listint - remove head of:
 * @head: Input, add of start of lls
 *
 * Return: (int) head's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *head2;
	int data;

	data = 0;
	tmp = *head;
	head2 = *head;

	head2 = head2->next;
	data = tmp->n;
	free(tmp);
	return (data);
}

