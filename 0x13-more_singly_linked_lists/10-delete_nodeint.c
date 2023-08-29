#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a linked list
 * @head: Pointer to the pointer of head node
 * @index: Index of the node to be deleted
 * Return: 1 (for success) or -1 (for fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int x;

	if (!head || !*head)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
