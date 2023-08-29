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
		listint_t *old_node, *current;

		if (head == NULL)
			return;
		current = *head;

		while (current != NULL)
		{
			old_node = current;
			
			current = current->next;
			free(old_node);
		}
		*head = NULL;
	}
}
