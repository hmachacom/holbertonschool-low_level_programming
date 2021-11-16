#include "lists.h"
/**
 *get_nodeint_at_index:-function that returns the nth node of
 *@index:is the index of the node
 *@head:-linked list
 * Return: long linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head)
	{
		while (count <= index)
		{
			tmp = head->next;
			head = tmp;
			count++;
			if (!head)
				return (NULL);
		}
	}
	else
		return (NULL);
	return (tmp);
}
