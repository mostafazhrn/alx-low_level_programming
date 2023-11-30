#include "hash_tables.h"
/**
 * key_index - this code shall get key
 * @key: this represent the key
 * @size: this is the size of the array
 * Return: this shall return hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
hash = hash_djb2(key);
return (hash % size);
}
