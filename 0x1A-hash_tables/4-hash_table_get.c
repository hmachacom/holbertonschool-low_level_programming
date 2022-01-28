#include "hash_tables.h"
/**
 *hash_table_set:-creat a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 *@key:-is the key
 *@value:-is the value associated with the key
 * Return: 1 full or 0 error
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	if (strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	if (!ht->array[index])
		return (NULL);
	return (ht->array[index]->value);
}
