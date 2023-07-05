#include "lists.h"

/**
 * sum_listint - computes sum of data in lls:
 * @head: Input, start of lls
 *
 * Return: (int) sum data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

