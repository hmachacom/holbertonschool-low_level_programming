#include "lists.h"
/**
 *insert_nodeint_at_index:-function that returns the nth node of
 *@idx:is the index of the node
 *@head:-linked list
 *@n:new value
 * Return: long linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *newnodo;
	unsigned int count = 1;

	tmp = *head;
	tmp2 = *head;
	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	if (!*head && idx > 0)
	{
		return (NULL);
	}
	if (idx == 0 || !*head)
	{
		newnodo->next = *head;
		newnodo->n = n;
		*head = newnodo;
		return (newnodo);
	}
	while ((*head))
	{
		if (count == idx)
		{
			newnodo->next = tmp->next; /*le asigo lasiguienteposicionaminodoactual*/
			(*head)->next = newnodo;
			newnodo->n = n;
			*head = tmp2; /*aheadleasignolacabezanuevamente*/
			return (newnodo);
		}
		tmp = (*head)->next;
		*head = tmp;
		count++;
	}
	if (count < idx)
	{
		*head = tmp2;
		return (NULL);
	}
	return (NULL);
}
