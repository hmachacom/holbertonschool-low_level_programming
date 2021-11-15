#include "lists.h"
/**
 *add_nodeint:-add new nodo a linked list
 *@head: linked list
 *@n:int
 * Return: long linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodo;

	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	newnodo->n = n;
	if (!*head)
		newnodo->next = NULL;
	else
		newnodo->next = *head;
	*head = newnodo;

	return (*head);
}
