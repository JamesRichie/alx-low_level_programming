#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of a list
 * @head: Pointer to the address of head
 * @n: The new node to be added
 * Return: The adress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;
	new_n = malloc(sizeof(listint_t));

	if (new_n != NULL)
	{
		return (NULL);
	}

	new_n->n = n;
	new_n->next = *head;
	new_n = *head;

	return (new_n);
}
