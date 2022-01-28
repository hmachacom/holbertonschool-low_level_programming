#include "hash_tables.h"
/**
 *hash_table_set:-creat a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 *@key:-is the key
 *@value:-is the value associated with the key
 * Return: 1 full or 0 error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);

	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);
	tmp = malloc(sizeof(hash_node_t *));
	if (!tmp)
		return (0);
	if (ht->array[index] == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		tmp->key = strdup(ht->array[index]->key);
		tmp->value = strdup(ht->array[index]->value);
		tmp->next = NULL;
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = tmp;
		free(ht->array[index]->value);
		ht->array[index] = new_node;
	}
	return (1);
}
