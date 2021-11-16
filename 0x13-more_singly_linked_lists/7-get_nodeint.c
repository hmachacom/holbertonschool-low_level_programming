#include "lists.h"
/**
 *get_nodeint_at_index:-function that returns the nth node of
 *@index:is the index of the node
 *@head:-linked list
 * Return: long linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (count <= index)
		{
			if (count == index)
			{
				return (head);
			}
			if (!head || count > index)
				return (NULL);
			head = head->next;
			count++;
		}
	}
	else
		return (NULL);
	return (NULL);
}
