#include "lists.h"

/* sum_listint - returns some ints in node:
 *
 * @head: Input, head
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
        int sum;

        sum = 0;
        while (head != NULL)
        {
		
		sum += head->n;
                head = head->next;
        }
        return (sum);

}
