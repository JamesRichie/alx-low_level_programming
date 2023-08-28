#include "lists.h"

/**
 * free_listint - frees a list
 * @head: Pointer to the head
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *old_node;
		head = head->next;
		old_node = head;

		free(old_node);
	}
}
