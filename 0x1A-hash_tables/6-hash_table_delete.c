#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a HT.
 * @ht: A pointer to the target HT.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *t;
	unsigned long int ind;

	for (ind = 0; ind < ht->size; ind++)
	{
		if (ht->array[ind] != NULL)
		{
			nd = ht->array[ind];
			while (nd != NULL)
			{
				t = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = t;
			}
		}
	}
	free(hd->array);
	free(hd);
}
