#include "lists.h"
/**
 *add_node:-add new nodo a linked list
 *@head: linked list
 *@str:string
 * Return: long linked list
 */
void free_list(list_t *head)
{
	list_t *intet;

	while(head)
	{
		intet = head->next;
		free(head->str);
		free(head);
		head = intet;
	}
}