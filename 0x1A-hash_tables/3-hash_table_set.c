#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update key/value to
 * @key: key, cannot be na empty string
 * @value: value associated with the key, must be duplicated,
 * can be am e,pty string.
 * Return: 1 if success, 0 otherwise
 * in case of collision, add th enew node at the,
 * beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);

			if (current->value == NULL)
				return (0);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
