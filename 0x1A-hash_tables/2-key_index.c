#include "hash_tables.h"

/**
 * key_index - Get index which a key pair should be stored
 *               in array of hash table.
 * Description: uses djb2 algorithm
 * @key: key to get index
 * @size: size of array of hash table
 *
 * Return: Key's index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
