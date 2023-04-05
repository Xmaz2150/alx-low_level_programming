#include <stddef.h>
#include  "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint- adds node in lls starting at:
 * @h: Input, head
 * Return: pointer to new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node = *head;
	*head = new_node;

	tmp = new_node;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (new_node);
}
