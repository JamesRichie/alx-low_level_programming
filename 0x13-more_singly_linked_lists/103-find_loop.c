#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: Pointer to the head node
 *
 * Return: Adress of node of loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *hp;


	if (head == NULL || head->next == NULL)
		return (NULL);
	temp = head->next;
	hp = (head->next)->next;

	while (hp)
	{
		if (temp == hp)
		{
			temp = hp;

			while (temp != hp)
			{
				temp = temp->next;
				hp = hp->next;
			}
			return (temp);
		}
		temp = temp->next;
		hp = (hp->next)->next;
	}
	return (NULL);
}
