#include "hash_tables.h"

/**
 * hash_table_set - Add or update a hash table element.
 * @ht: A pointer to the target.
 * @key: The key.
 * @value: The associated value.
 *
 * Return: 1 on succes and 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *novo;
	char *value_cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	novo = malloc(sizeof(hash_node_t));
	if (novo == NULL)
	{
		free(value_cp);
		return (0);
	}
	novo->key = strdup(key);
	if (novo->key == NULL)
	{
		free(novo);
		return (0);
	}
	novo->value = value_cp;
	novo->next = ht->array[index];
	ht->array[index] = novo;

	return (1);
}
