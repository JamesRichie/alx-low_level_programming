#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *current, *temp;

	if (head == NULL)
		return (0);
	temp = current = *head;
	if (*head)
	{
		x = current->n;
		*head = current->next;
		free(temp);
	}
	else
		x = 0;
	return (x);
}
