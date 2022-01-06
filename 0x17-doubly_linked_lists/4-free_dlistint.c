#include "lists.h"
/**
 * free_dlistint - free doublylinklist.
 * @head: doubly linkt list
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *tmp = head;

		while (tmp->next)
		{
			free(head);
			head = tmp;
			tmp = tmp->next;
		}
		free(tmp);
	}
}
