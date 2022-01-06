#include "lists.h"
/**
 *print_dlistint:-function print doublylinked list
 *@h: linked list
 * Return: long linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_nodo;

	new_nodo.next = malloc(sizeof(dlistint_t));
	if (!new_nodo.next)
		return (NULL);
	new_nodo.n = n;
	if (!*head)
	{
		new_nodo.next = NULL;
		new_nodo.prev = NULL;
		*head = &new_nodo;
	}
	else
	{
		(*head)->next = &new_nodo;
		new_nodo.prev = *head;
		new_nodo.next = NULL;
		printf("hugo\n");
	}
	printf("%djhj\n", (*head)->n);
	return(*head);
}
