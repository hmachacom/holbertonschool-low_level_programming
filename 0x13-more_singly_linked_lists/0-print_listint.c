#include "lists.h"
/**
 * print_listint - print linked singly list
 * @h: list type listint_t
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ret++;
		h = h->next;
	}
	return (ret);
}
