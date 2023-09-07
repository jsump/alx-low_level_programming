#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key to be indexed
 * @size: size of array of the hash table
 * Return: index at which the key/value pair should be stored,
 * in the array of the hash table.
 * You will have to use this hash function for all the next tasks.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
