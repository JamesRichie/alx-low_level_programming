#include "lists.h"

/**
 * free_listint_safe - Frees a list
 * @h: Pointer to the first node 
 *
 * Return: Size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length;
	listint_t *temp;
	int dif;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;

		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
