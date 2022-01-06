#include "lists.h"
/**
 *print_dlistint:-function print doublylinked list
 *@h: linked list
 * Return: long linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
	{
		int elements;
		for(elements = 0; h ; elements++)
			h = h->next;
		return(elements);
	}
	return(0);
}
