#include "lists.h"
/**
 *sum_listint:-returns the sum of all the data (n)
 *@head: linked list
 * Return: long linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int count = 0;

	if (!head)
		return (0);
	while (head)
	{
		tmp = head->next;
		count += head->n;
		head = tmp;
	}
	return (count);
}
