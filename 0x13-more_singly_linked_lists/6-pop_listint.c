#include "lists.h"

/**
 * pop_listint - removes head of lls:
 *
 * @head: Input.
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return ((*head)->n);
}
