#include "lists.h"
/**
 *print_listint:-function print linked list
 *@h: linked list
 * Return: long linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
