#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head : pointer to the head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *old_node;
		*head = (*head)->next;
		old_node = *head;

		free(old_node);
	}
}
