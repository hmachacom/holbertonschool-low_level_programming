#include "lists.h"
/**
 *delete_nodeint_at_index:-function that returns the nth node of
 *@index:is the index of the node
 *@head:-linked list
 * Return: long linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 1;

	tmp = (*head)->next;
	if (!*head)
		return (-1);
	if (index == 0)
	{
		free(*head);
		free(head);
		*head = tmp;
		return (1);
	}
	while ((*head))
	{
		if (count == index)
		{
			/*free(*head);*/
			free(head);
			*head = tmp;
			return (1);
		}
		tmp = (*head)->next;
		*head = tmp;
		count++;
	}
	return (-1);
}
