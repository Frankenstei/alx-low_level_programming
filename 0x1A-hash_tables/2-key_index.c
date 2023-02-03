#include "hash_tables.h"

/**
 * key_index - key index.
 * @key: the a stringk key
 * @size: the size of the hash function's array.
 *
 * Return: Index number for the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
