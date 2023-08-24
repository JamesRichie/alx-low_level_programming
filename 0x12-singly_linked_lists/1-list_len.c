#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list+t list
 * @h: Singly list
 *
 * Return: the no of elements
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
