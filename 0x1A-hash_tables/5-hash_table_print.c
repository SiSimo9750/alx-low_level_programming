#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the target HT.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int ind;
	unsigned char co_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (ind = 0; ind < ht->size; ind++)
	{
		if (ht->array[ind] != NULL)
		{
			if (co_flag == 1)
				printf(", ");

			nd = ht->array[ind];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			co_flag = 1;
		}
	}
	printf("}\n");
}
