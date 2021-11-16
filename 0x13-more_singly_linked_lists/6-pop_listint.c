#include "lists.h"
/**
 *pop_listint:- linked list
 *@head: linked list
 * Return: long linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value = 0;

	if (!*head)
		return (0);
	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;
	return (value);
}
