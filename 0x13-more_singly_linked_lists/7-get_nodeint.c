#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of alinked list
 * @head: pointer to head
 * @index: Index of the node
 * Return: If node does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
