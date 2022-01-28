#include "hash_tables.h"
/**
 *hash_table_print:-print a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 * Return: value or Null
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, val = 0, index2;

	if (ht)
	{
		for (index = 0; index <= ht->size; index++)
			if (ht->array[index])
				val++;
		if (val == 0)
		{
			printf("{}\n");
			return;
		}
	}
	val = 0;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			for (index2 = index + 1; index2 < ht->size; index2++)
			{
				if (ht->array[index2])
					val = 1;
			}
		}
		if (val == 1 && ht->array[index])
		{
			printf(", ");
			val = 0;
		}
		val = 0;
	}
	printf("}");
	printf("\n");
}
