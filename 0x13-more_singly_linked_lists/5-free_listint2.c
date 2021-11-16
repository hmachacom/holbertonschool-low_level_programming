#include "lists.h"
/**
 *free_listint2:-free a linked list
 *@head: linked list
 * Return: long linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*(head))
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
