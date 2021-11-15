#include "lists.h"
/**
 *add_nodeint_end:-add new nodo end a linked list
 *@head: linked list
 *@n:int
 * Return: long linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodo, *tmp;

	tmp = *head;
	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	newnodo->n = n;
	if (!*head)
	{
		*head = newnodo;
		return (newnodo);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnodo;
	return (newnodo);
}
