#include "lists.h"

/**
 * pop_listint - remove head of:
 * @head: Input, add of start of lls
 *
 * Return: (int) head's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	data = 0;
	tmp = *head;

	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	return (data);
}

