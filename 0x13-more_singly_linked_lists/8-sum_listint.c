#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in alinked list
 * @head: Pointer to head node
 *
 * Return: 0 (if list ids empty)
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
