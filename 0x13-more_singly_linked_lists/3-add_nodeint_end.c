#include "lists.h"

/**
 * add_nodeint_end - adds node at end of lls:
 * @head: Input, start of lls
 * @n: Input, value to be added
 *
 * Return: (struct *)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
