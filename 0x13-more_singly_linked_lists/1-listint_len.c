#include "lists.h"
/**
 *listint_len:-function return lon  linked list
 *@h: linked list
 * Return: long linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
