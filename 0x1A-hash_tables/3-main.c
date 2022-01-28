#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hugo", "machacon");
	hash_table_set(ht, "hetairas", "1215");
	hash_table_set(ht, "mentioner", "8888");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("ht key %s  ", ht->array[i]->key);
			printf("ht value %s  index %lu\n", ht->array[i]->value, i);
			if (ht->array[i]->next)
			{
				printf("ht next key %s\n", ht->array[i]->next->key);
				printf("ht next value %s\n", ht->array[i]->next->value);
			}
		}
	}
	return (EXIT_SUCCESS);
}