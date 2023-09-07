#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * print in the order of array, list
 * if ht is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *current;
	int comma_flag;

	comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);

			comma_flag = 1;
			current = current->next;
		}
	}
	printf("}\n");

}


