#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key
 *
 *@ht: hash table you want to look into
 *@key: the key you are looking for
 *
 *Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *no_do;
	unsigned long int index;

	if (key == NULL || ht == NULL)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	no_do = ht->array[index];

	for (; no_do != NULL; no_do = no_do->next)
	{
		if (strcmp(no_do->key, key) == 0)
		return (no_do->value);
	}
	return (NULL);
}
