#include "lists.h"

/**
 * listint_len - returns number of elemnts on a linked list
 * @h: Pointer to the head
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
