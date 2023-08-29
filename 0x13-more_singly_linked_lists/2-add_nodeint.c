#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of a list
 * @head: Pointer to the address of head
 * @n: The new node to be added
 * Return: The adress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
