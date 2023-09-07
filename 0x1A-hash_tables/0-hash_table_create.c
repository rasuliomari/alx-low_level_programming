#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 * Return: A pointer to the new hash table in memory (heap).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int t = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (; t < size; t++)
	{
		new_table->array[t] = NULL;
	}

	return (new_table);
}
