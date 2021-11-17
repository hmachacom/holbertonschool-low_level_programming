#include "lists.h"
/**
 *delete_nodeint_at_index:-function that returns the nth node of
 *@index:is the index of the node
 *@head:-linked list
 * Return: long linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2 = NULL;
	unsigned int count = 1;

	if (!*head || !head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	tmp = tmp->next;
	while (tmp)
	{
		if (count + 1 == index)
		{
			break;
		}
		tmp = tmp->next;
		if (!tmp)
			return (-1);
		count++;
	}
	if (!tmp)
		return (-1);
	if (count < index)
	return (-1);
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
