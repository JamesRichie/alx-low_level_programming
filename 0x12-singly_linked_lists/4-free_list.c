#include "lists.h"
/**
 * free_list - frees a list
 * @head: Head of the linked list
 *
 * Return: freed list
 */
void free_list(list_t *head)
{
	list_t *now;

	while ((now =  head) == NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
