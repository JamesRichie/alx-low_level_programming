#include "lists.h"

/**
 * add_node_end - Adds new node at the end of list_t
 * @head: Head of the linked list
 * @str: String to store  list
 * Return: Adreess of new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
